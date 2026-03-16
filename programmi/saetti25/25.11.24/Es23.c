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

void supInfPrimi(int *inf, int *sup, int x){
    *inf = x - 1; //*inf fa da pseudonimo per primoInferiore
    while(sePrimo(*inf) == 0){
        *inf = *inf -1;
    }

    *sup = x - 1; //*sup fa da pseudonimo per primoSuperiore
    while(sePrimo(*sup) == 0){
        *sup = *sup +1;
    }
}

int main(void){
    srand(time(NULL));
    int vett[DIM];
    int i, primoInferiore, primoSuperiore;
    for(i = 0; i < DIM - 1; i++){
        vett[i] = rand() % 91 + 10;
        printf("%d", vett[i]);
    }

    for(i = 0; i < DIM; i++){
        supInfPrimi(&primoInferiore, &primoSuperiore, vett[i]);
        printf("i primi inferiori e superiori rispetto a %d: %d e %d\n", vett[i], primoInferiore, primoSuperiore);
    }

    return 0;
}
