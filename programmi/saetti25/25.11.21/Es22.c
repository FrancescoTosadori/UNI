#include "stdlib.h"
#include "stdio.h"

int divisori(int n){
    int divisori = 0;
    for(int i = 0; i < n; i++){
        if(n % i == 0)divisori++;
    }
    return divisori;
}

int main(void){
    int vett[10];

    for(int i = 0; i < 10; i++){
        vett[i] = rand() % 101 + 1;
        printf("%d\n", vett[i]);
    }

    int max = 0;

    for(int i = 0; i < 10; i++){
        if(divisori(vett[i]) > divisori(vett[max])){
            max = i;
        }
    }

    printf("max divisori:");
}