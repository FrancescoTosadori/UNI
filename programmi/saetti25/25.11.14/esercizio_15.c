//Acquisire una parola da tastiera, assumendo che la parola contenga al  massimo 20 lettere. Visualizzarla al contrario.
#include "stdio.h"

#define DIM 21

int main(void){
    char parola[DIM], inverso[DIM];
    scanf("%20s", parola);

    int n;
    for(n = 0; n < DIM && parola[n] != '\0'; n++);

    int i;
    for(i = n - 1; i >= 0; i--){
        inverso[n - 1 - i] = parola[i];
    }

    puts(inverso);
}
