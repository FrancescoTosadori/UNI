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

int rimuovi(float vet[], int n, float valore){
    int pos = cerca(vet, n, valore);
    if(pos < 0){
        printf("Valore non presente");
        return(n);
    }
    else{
        int i;
        for(i = pos; i < n; i++) vet[i] = vet[i+1];
        return --n;
    }

}

#define DIM 5
#include "stdlib.h"
int main(void){
    float vet[DIM], nuovoReale;
    
    int n = 0;
    do{
        nuovoReale = (rand() % 101) / 100.0;
        n = inserisci(vet, n, nuovoReale);
    }while(n < DIM);

    visualizza(vet, n);

    printf("\n=>");
    float reale_da_sostituire;
    scanf("%f", &reale_da_sostituire);
    
    rimuovi(vet, DIM, reale_da_sostituire);

    visualizza(vet, n);
    
    return 0;
}
