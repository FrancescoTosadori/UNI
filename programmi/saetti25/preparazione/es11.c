#include <stdio.h>

#define DIM 10

int divisori(int n){
    int i, divisori = 2;
    
    for(i = 2; i < n; i++)
        if(n % i == 0) divisori++;
    return divisori;
}

int main(void){
    int i, x;

    for (i = 0; i < DIM; i++){
        printf("→");
        scanf("%d", &x);
        printf("%d ha %d divisori\n", x, divisori(x));
    }

    return 0;
}

