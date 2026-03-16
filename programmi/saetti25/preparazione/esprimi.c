#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

int seprimo(int n){
    int i,multipli;
    multipli = 0;
    for (i = 2; i <= n/2; i++)
        return 0;
    return 1;
}

int main(void){
    srand(time(NULL));

    int sequenza[DIM],i;

    for(i = 0; i < DIM; i++){
        sequenza[i] = rand() % 11;
        printf("\n%d",sequenza[i]);
    }

    printf("\n-------------------\n");

    for(i = DIM - 1; i >= 0; i--){
        if(seprimo(sequenza[i])) 
            printf("%d\n",sequenza[i]);
    }
}
