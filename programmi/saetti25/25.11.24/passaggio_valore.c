#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void azzera(int * v, int n){
    //n indica la quantità di variabili nel vettore
    int i;
    for( i  = 0; i < n; i++){
        *(v+i) = 0;
    }
}

int main(void){
    srand(time(NULL));
    int i = 0, vett[10];
    for( i = 0; i < 10; i++){
        vett[i] = rand() % 11;
        printf("%4d", vett[i]);
    }
    printf("\n");
    azzera(vett, 10);
    for( i = 0; i < 10; i++){
        printf("%4d", vett[i]);
    }
}
