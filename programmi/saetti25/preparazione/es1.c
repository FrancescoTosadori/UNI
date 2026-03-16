//Acquisire da tastiera 5 volte due numeri naturali. Si considerino i naturali acquisiti come il dividendo ed il divisore di una divisione. Dopo avere acquisito tutti i naturali, visualizzare il quoziente intero ed il resto di ciascuna divisione.

#include <stdio.h>

#define DIM 10

int main(void){
    //Acquisire da tastiera 5 volte due numeri naturali
    int naturali[DIM],i;

    for (i = 0; i < DIM; i++){
        printf("\n-->");
        scanf("%d",&naturali[i]);
    }

    for(i = 0; i < DIM; i+=2){
        printf("\ndividendo:%d, divisore:%d, quoziente intero:%d, resto:%d",naturali[i],naturali[i+1],naturali[i]/naturali[i+1],naturali[i]%naturali[i+1]);
    }

    return 0;
}
