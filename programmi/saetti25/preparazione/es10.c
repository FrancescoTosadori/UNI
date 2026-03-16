#include <stdio.h>
#include <stdlib.h>

#define DIM 100

int main(void){
    int x, i, sequenza[DIM], occorrenze = 0;

    do{
        printf("→");
        scanf("%d", &x);
    }while((x <= 0)||(x > 20));
    
    for(i = 0; i < DIM; i++){
        sequenza[i] = rand() % 20 + 1;
        printf("\n%d", sequenza[i]);
        if(sequenza[i] == x) occorrenze++;
    }

    printf("\n%d appare %d volte nella sequenza", x, occorrenze);
    return 0;
}
