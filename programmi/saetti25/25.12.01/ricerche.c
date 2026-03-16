//Se le sequenze sono disordinate, il modo migliore per effettuare una ricerca è cercare un termine alla volta. Se si parla di sequenze ordinate, la sequenza binaria è un algoritmo estremamente efficiente per cercare i dati.

//cerca
int cerca(int vet[], int n, int num){
    for(int i = 0; i < n; i++){
        if(vet[i] == num) {
            return i;
        }
    }
    return -1;
}

//inserimento alla fine
#include "stdio.h"
#define DIM 12
int inserimento_fine(int vet[], int n, int nuovo){
    if (n < DIM) vet[n++] = nuovo;
    else printf("\nWarning: Array is full");
    return n;
}
//Il numero di operazioni non dipende dalla lunghezza della sequenza: ciò significa che il numero di operazioni è costante, il che rende queste operazioni estremamente efficienti.

//Inserimento in sequenza ordinata:
int inserimento_diretto (int vet[], int n, int nuovo){
    int i,j;
    for (i = 0; i < n && vet[i] < nuovo; i++); //itera l'incremento di i; serve per capire dove inserire il numero nuovo.
    for (j = n; j > i; j--){
        vet[j] = vet [j - 1];
    }
    vet[i] = nuovo;
    return ++n; //RICORDA CHE ++ VA PREFISSATO!!! -altrimenti return restituisce il valore di n prima di poter sommare 1-
}
//Il numero di operazioni cresce linearmente. Se devo effettuare molti inserimenti e poche ricerche, non vale la pena mantenere ordinata la sequenza.

//Cancellazione in sequenza disordinata vs ordinata.
int cancellazione_disordinata (int vet[], int n, int num){
    int pos = cerca(vet,n,num);

    if(pos >= 0) {
        vet[pos] = vet[n-1];
        n--;
    }

    else printf("\nWarning: Number not found");
    return n;
}
//Costa quanto una ricerca + 1

//Cancellazione su sequenza ordinata:
int cancellazione(int vet[], int n, int num) {
    int i, pos = cerca(vet, n, num);
    
    if (pos >= 0) {
        for (i = pos; i < n - 1; i++)
            vet[i] = vet[i+1];
        n--;
    }
    else printf("\nWarning: Number not found");
    return n;
}
//Stare molto attenti agli errori off-by-one

//Fusione di sequenze:
//Guardiamo solo le sequenze ordinate, essendo l'altro caso il più semplice.
//NB è meglio costruire il vettore in modo ordinato in una volta sola, al posto di fondere per poi ordinare.
int fusione(int v1[], int v2[], int v3[], int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    do {
        if (i < n1 && (j == n2 || v1[i] <= v2[j]))
            v3[k++] = v2[i++];
        else 
            v3[k++] = v2[j++];
    }while(i < n1 || j < n2);
    return k;
}

