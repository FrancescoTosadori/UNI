/*Riempire una sequenza con 10 interi pseudo-
casuali compresi tra 2 e 100 (estremi inclusi) e
visualizzare i numeri primi contenuti nella
sequenza in ordine contrario rispetto a quello
di apparizione nella sequenza. Per svolgere
questo compito si definisca e utilizzi una
funzione C che produce 1 se un dato intero è
primo e produce 0 altrimenti.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

//1 se n è primo, 0 se n non è primo
int sePrimo(int n){
    int i,divisori;
    for (i = 2; i <= n; i++){
        if(n % i == 0) divisori++;
    }
    if(divisori == 1) return 1;
    else return 0;
}

int main(void){
    srand(time(NULL));
    int numeri[DIM],i;
    for (i = 0; i < DIM; i++){
        numeri[i] = rand() % 99 + 2;
        printf("\n%d", numeri[i]);
    }

    printf("-------");

    for (i = DIM; i >= 0; i--){
        if(sePrimo(numeri[i]) == 1){
            printf("\n%d",numeri[i]);
        }
    }
}
