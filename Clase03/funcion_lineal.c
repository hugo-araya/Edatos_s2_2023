#include <stdio.h>
#include <math.h>

struct punto{
    int x;
    int y;
};

struct punto centro_trian(struct punto p1, struct punto p2, struct punto p3);
struct punto lee_punto();
struct punto punto_medio(struct punto p1, struct punto p2);
void muestra_puntos_medios(struct punto p1, struct punto p2, struct punto p3, struct punto pa, struct punto pb, struct punto pc);
void muestra_centro_triangulo(struct punto centro);
double distancia(struct punto p1, struct punto p2);
void muestra_distancias(struct punto centro, struct punto p1, struct punto p2, struct punto p3);

int main(){
    struct punto p1, p2, p3;
    struct punto pa_m, pb_m, pc_m;
    struct punto centro;

    p1 = lee_punto();
    p2 = lee_punto();
    p3 = lee_punto();

    pa_m = punto_medio(p1, p2);
    pb_m = punto_medio(p1, p3);
    pc_m = punto_medio(p2, p3);   

    muestra_puntos_medios(p1,p2,p3,pa_m, pb_m, pc_m);
    centro = centro_trian(pa_m, pb_m, pc_m);
    muestra_centro_triangulo(centro);

    muestra_distancias(centro, p1, p2, p3);

    return 0;
}

struct punto centro_trian(struct punto p1, struct punto p2, struct punto p3){
    struct punto centro;
    centro.x = (p1.x + p2.x+ p3.x)/3;
    centro.y = (p1.y + p2.y+ p3.y)/3;
    return centro;
}

struct punto lee_punto(){
    struct punto p;
    int x, y;
    printf("Ingrese coordenada x: ");
    scanf("%d", &x);
    printf("Ingrese coordenada y: ");
    scanf("%d", &y);
    p.x = x;
    p.y = y;
    return p;
}

struct punto punto_medio(struct punto p1, struct punto p2){
    struct punto p;
    p.x = (p1.x + p2.x)/2;
    p.y = (p1.y + p2.y)/2;
    return p;
}

void muestra_puntos_medios(struct punto p1, struct punto p2, struct punto p3, struct punto pa, struct punto pb, struct punto pc){
    printf("El punto medio de (%d, %d) con (%d, %d) es: (%d, %d)\n", p1.x, p1.y, p2.x, p2.y, pa.x, pa.y);
    printf("El punto medio de (%d, %d) con (%d, %d) es: (%d, %d)\n", p1.x, p1.y, p3.x, p3.y, pb.x, pb.y);
    printf("El punto medio de (%d, %d) con (%d, %d) es: (%d, %d)\n", p2.x, p2.y, p3.x, p3.y, pc.x, pc.y);
}

void muestra_centro_triangulo(struct punto centro){
    printf("El centro del triangulo es (%d , %d)\n", centro.x, centro.y);
}

double distancia(struct punto p1, struct punto p2){
    double dist;
    dist = sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    return dist;
}

void muestra_distancias(struct punto centro, struct punto p1, struct punto p2, struct punto p3){
    double d1, d2, d3;
    d1 = distancia(centro, p1);
    d2 = distancia(centro, p2);
    d3 = distancia(centro, p3);
    printf("Distancia 1: %lf\n", d1);
    printf("Distancia 2: %lf\n", d2);
    printf("Distancia 3: %lf\n", d3);

}