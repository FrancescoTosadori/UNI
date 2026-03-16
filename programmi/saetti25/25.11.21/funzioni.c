#include "stdio.h"

int parteInt(float num){
    return (int)num;
}

int main(void){
    printf("Dichiarazione di funzioni\n");
    //scrivere funzione() e funzione(void) al momento della definizione è la stessa cosa.
    float banana = 3.14159;
    printf("Parte intera della variabile banana (%f) = %d\n",banana,parteInt(banana));    
    return 0;//non deve necessariamente un argomento.
    (void) parteInt(banana); //scarta il risultato della funzione
    //NB leggere cos'è il passaggio per riferimento e per valore. 
    //Per restituire più dati bisogna ricorrere al passaggio per riferimento, fatto usando i puntatori.
    //Quando la funzione deve lavorare con vettori e matrici, che non possono essere manipolati in una matrice. Questo significa che è comodo 
}
