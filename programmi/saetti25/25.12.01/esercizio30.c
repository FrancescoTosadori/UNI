#include "stdio.h"

//per semplicità usiamo la ricerca lineare
int cerca(float vet[], int n, float num){
    for(int i = 0; i < n; i++){
        if(vet[i] == num) {
            return i;
        }
    }
    return -1;
}

void visualizza(float vet[], int n){
    for (int i = 0; i < n; i++){
        printf("%2f\n", vet[i]);
    }
}

int inserisci(float vet[], int n, float num){
    //controlliamo che il reale non sia già presente
    if (cerca(vet, n, num) >= 0){
        return n;
    }
    else{
        int i;
        for(i = n - 1; i >= 0 && vet[i] > num; i--){
            vet[i+1] = vet[i];
        }
        vet[i+1] = num;
        return n + 1;
    }
}

#define DIM 10
#include "stdlib.h"
int main(void){
    float vet[DIM], nuovoReale;
    
    int n = 0;
    do{
        nuovoReale = (rand() % 101) / 100.0;
        n = inserisci(vet, n, nuovoReale);
    }while(n < DIM);

    visualizza(vet, n);
    return 0;
}