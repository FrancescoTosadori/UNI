#include "stdio.h"
#include "stdlib.h"

typedef struct {
    float x;
    float y;
}Punto;

int main(void){
    int i, numeroPunti = 5;
    Punto poligono[numeroPunti], centro;

    for(i = 0; i < numeroPunti; i++){
        poligono[i].x = rand() % 10 -5;
        poligono[i].y = rand() % 10 -5;
    }

    return 0;
}