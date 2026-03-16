//Riempire una sequenza con 10 punti del piano cartesiano, l'ascissa e l'ordinata di ognuno dei quali è un numero compreso tra -1000 e 1000.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

typedef struct{
    int x;
    int y;
}punto;

void printp(punto a){
    printf("\n(%d,%d)", a.x, a.y);
}

void printseq(punto sequenza[], int n){
    int i;

    for (i = 0; i < n; i++){
        printp(sequenza[i]);
    }
}

int main(void){
    srand(time(NULL));

    punto sequenza[DIM];
    int i;

    for (i = 0; i < DIM; i++){
        sequenza[i].x = rand() % 2001 - 1000;
        sequenza[i].y = rand() % 2001 - 1000;
    }

    printseq(sequenza, DIM);
}
