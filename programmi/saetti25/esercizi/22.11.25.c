/*Si consideri una sequenza di 10 numeri naturali pseudo-casuali compresi tra 1 e 100. Si visualizzi la sequenza. Successivamente si visualizzi il naturale con la maggior quantità di divisori. Per svolgere questo compito si definisca ed utilizzi una funzione che produca la quantità di divisori di un dato intero.*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define DIM 100

int divisori(int n){
    int i;
    int divisori = 0;
    for(i = 1; i < n; i++){
        if(n % i == 0){
            divisori++;
        }
    }
    return divisori;
}

int main(void){
    srand(time(NULL));
    int sequenza[DIM];
    int i;
    printf("sequenza di interi:");
    for(i = 0; i < DIM; i++){
        sequenza[i] = rand() % 100 + 1;
        printf("%d\n",sequenza[i]);
    }

    int max = 0;
    for(i = 0; i < DIM; i++){
        if(divisori(sequenza[i]) > divisori(sequenza[max])){
            max = i;
        }
    }
    printf("max divisori: %d\n",sequenza[max]);
    return 0;
}

