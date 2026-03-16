#include <stdio.h>

void potenze(int *sequenza){
    int i, j, risultato;

    for (i = 0; i < 5; i++){
        risultato = 1;
        for(j = 0; j < *(sequenza + i); j++) risultato *= 2;
        printf("\n2 ^ %d = %d", *(sequenza + i), risultato);
    }
}

int main(void){
    int i, sequenza[5];

    for(i = 0; i < 5; i++) scanf("%d", &sequenza[i]);

    potenze(sequenza);
    return 0;
}
