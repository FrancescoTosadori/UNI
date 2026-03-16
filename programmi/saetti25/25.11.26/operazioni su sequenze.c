//Le stesse funzioni usate su sequenze di interi possono essere usate su dati più complicati
/*
Operazioni tipiche:
    -ricerca
    -visualizzazione
    -inserzione
    -fondere 2 sequenze
    -ordinare una sequenza in base ad un criterio.
*/
#include "stdio.h"
//Visualizzione: stampa
void stampa(int vet[], int n){
    int i;

    for( i = 0; i < n ; i++ ){
        printf("%d", vet[i]);
    }
}

//Ricerca su vettore disordinato: devo scorrere dall'inizio alla fine cercando l'elemento
int cerca(int vet[], int n, int num){
    int i;

    for( i = 0 ; i < n ; i++ )
    {
        if( vet[i] == num)
        {
            return i;
        }
    }

    return -1;
}

//Se un vettore è ordinato, posso usare la ricerca binaria //nel caso peggiore, per n elementi le iterazioni necessarie sono log_2(n). Per 1000000 elementi, mi basta effettuare un massimo di 20 confronti.
int cerca_binaria(int vet[], int n, int num){
    int i, inizio = 0, fine = n - 1;

    do{
        i = (inizio + fine) / 2;
        if(vet[i] == num) return i;
        else{
            if(vet[i] < num)
                inizio = i + 1;
            else
                fine = i - 1;
        }
    }while(inizio <= fine);

    return -1;
}
