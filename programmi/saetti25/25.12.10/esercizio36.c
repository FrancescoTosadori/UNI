#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define DIM 10

typedef struct{
    int h;
    int m;
} Orario;

Orario estrai(void){
    Orario o;
    o.h = rand() % 24;
    o.m = rand() % 60;
    return o;
}

int main(void){
    srand(time(NULL));
    Orario vett[DIM];
    int i;

    for (i = 0; i < DIM; i++){
        vett[i] = estrai();
        printf("%02d:%02d\n", vett[i].h, vett[i].m);
    }
}
