#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define DIM 10

int sePrimo(int n){
    int i;

    for(i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }

    return 1;
}

int primoInf(int n){
    int i = n - 1;

    while(sePrimo(i) == 0){
        i--;
    }

    return i;
}

int primoSup(int n){
    int i = n + 1;

    while(sePrimo(i) == 0){
        i++;
    }
    
    return i;
}

int main(void){
    srand(time(NULL));
    int vett[DIM];
    int i;
    for(i = 0; i < DIM - 1; i++){
        vett[i] = rand() % 91 + 10;
        printf("%d", vett[i]);
    }

    for(i = 0; i < DIM; i++){
        printf("I numeri primi inferiori e superiori a %d: %d %d\n", 
        vett[i], primoInf(vett[i]), primoSup(vett[i]));
    }

    return 0;
}
