//Acquisire da tastiera un parola, assumendo che contenga al massimo 20 lettere. Stampare un anagramma
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define DIM 21

int main(void){
    srand(time(NULL));
    char parola[DIM];
    char anagramma[DIM];
    scanf("%20s", parola);

    //Conteggiamo la lunghezza della parola
    int n;
    for(n = 0; n < DIM && parola[n] != '\0'; n++);

    //Scramble
    int i, pos;
    for(i = 0; i < n; i++){
        pos = rand() % n;
        anagramma[pos] = parola[i];
        
    }
    puts(anagramma);
}