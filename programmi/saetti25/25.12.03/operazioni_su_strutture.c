//Gli ordinamenti
//Ordinamento diretto
void ordinamento_diretto(int vet[], int n){
    int i,j,x;

    for (i = 1; i < n; i++){
        x = vet[i];
        for (j = i-1; j >= 0 && x < vet[j]; j--)
            vet[j+1] = vet[j];
        vet[j+1] = x;
    }
}

//Parto dalla posizione 0 e scambio l'elemento con il più piccolo della sequenza rimanente.
void ordinamento_per_selezione(int vet[], int n){
    int i,j,k,x;

    for (i = 0; i < n-1; i++){
        k = i;
        x = vet[i];
        for(j = i + 1; j < n; j++){
            if(vet[j] < x){
                
            }
        }
    }
}

#include "stdio.h"
void stampa(int vet[], int n){
    int i;

    for( i = 0; i < n ; i++ ){
        printf("\n%d", vet[i]);
    }
    printf("\n");
}

#include "stdlib.h"
#include "time.h"
#define DIM 6
int main(void){
    srand(time(NULL));
    int vet[DIM] = {14267,986,2351367,1284, 46174, 962};
    
    printf("\nVettore:");
    stampa(vet, DIM);
    
    ordinamento_diretto(vet, DIM);
    printf("\nOrdinamento diretto:");
    stampa(vet,DIM);
    
    printf("\nVettore:");
    int i;
    for (i = 0; i < DIM; i ++){
        vet[i] = rand() % 10001 - 5000;
    }

    stampa(vet,DIM);

}