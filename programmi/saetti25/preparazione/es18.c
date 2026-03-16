#include<stdlib.h>
#include<stdio.h>

#define DIMR 10
#define DIMC 20

//1 se n primo, 0 altrimenti
int primo(int n){
    int i;
    for (i = 2; i < n; i++)
        if(!(n%i))
            return 0;
    return 1;
}

//Rimuovere da una data sequenza i numeri non primi producendo la nuova lunghezza della sequenza
int rimuovi_nonprimi(int*seq, int n){
    int i = 0, j;
    
    while (i < n){
        
        if (!primo(seq[i])){
            for (j = i; j < n; j++) seq[j - 1] = seq[j];
            n = n - 1;
        }
        else
            i++;
    
    }
    
    return n;
}

//visualizzare una sequenza di n interi
void printseq(int*seq, int n){
    int i;
    printf("\n");
    for(i = 0; i < n; i++)
        printf("%3d", *(seq+i));
}

int main(void){
    int i, j, mat[DIMR][DIMC];
    
    for (i = 0; i < DIMR; i++){
        for(j = 0; j < DIMC; j++){
            mat[i][j] = rand() % 41 + 10;
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < DIMR; i++){
        rimuovi_nonprimi(mat[i], DIMC);
        printseq(mat[i], DIMC);
    }

    return 0;
}
