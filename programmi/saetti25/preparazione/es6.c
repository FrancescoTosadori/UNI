/*
Riempire e visualizzare una tabella di 10 righe e 20 colonne
con interi pseudo-casuali compresi tra 10 e 50. Si consideri le
sequenze di interi presenti su ciascuna riga della tabella. Si
visualizzi ciascuna di queste sequenze a cui sono rimossi i
numeri non primi. Per svolgere questo compito si definisca ed
utilizzi tre funzioni con le seguenti finalità
• Produrre 1 se un dato numero è primo; 0 altrimenti
• Rimuovere da una data sequenza di interi i numeri non
primi producendo la nuova lunghezza della sequenza
• Visualizzare una sequenza di n interi
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMR 30
#define DIMC 30

//Produrre 1 se un dato numero è primo; 0 altrimenti
int primo(int n){
    int i;
    for (i = 2; i < n; i++)
        if(!(n%i))
            return 0;
    return 1;
}

//Rimuovere da una data sequenza di interi i numeri non primi producendo la nuova lunghezza della sequenza
int rimuoviNonPrimi(int sequenza[], int n){
    int i, nonPrimiRimossi = 0;
    
    for (i = 0; i < n; i++)
        if(!primo(sequenza[i])){
            nonPrimiRimossi++;
            sequenza[i] = 0;
        }
    return (n - nonPrimiRimossi);
}

//Visualizzare una sequenza di n interi
void prints(int sequenza[], int n){
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%3d", sequenza[i]);
}

//Si consideri le sequenze di interi presenti su ciascuna riga della tabella. Si visualizzi ciascuna di queste sequenze a cui sono rimossi i numeri non primi.
int main(void){
    srand(time(NULL));
    
    int i, j, mat[DIMR][DIMC];

    for(i = 0; i < DIMR; i++ ){
        for(j = 0; j < DIMC; j++){
            mat[i][j] = rand() % 41 + 10;
            printf("%3d",mat[i][j]);
        }
        printf("\n");
    }
   
    for (i = 0; i < DIMR; i++){
        rimuoviNonPrimi(mat[i], DIMC);
        prints(mat[i], DIMC);
    }

}
