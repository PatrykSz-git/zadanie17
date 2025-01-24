#include <stdio.h>

float cuboid_volume(float a, float b,float h){
    return(a*b*h);
}
int main() {
    float a, b, h;

    printf("podaj dlugosc podstawy prostopadlosciana: ");
    scanf("%f", &a);


    printf("podaj szerokosc podstawy prostopadlosciana: ");
    scanf("%f", &b);


    printf("podaj wysokosc prostopadlosciana: ");
    scanf("%f", &h);


    printf("\Obientosc prostopadloscianu: %f\n", cuboid_volume(a, b, h));

return(0);
}
