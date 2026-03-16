#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numero_apparizioni(int x, int y, int n, int*app_x, int*app_y){
    *app_x = *app_y = 0;
    while(n > 0){
        if(n%10 == x)(*app_x)++;
        if(n%10 == y)(*app_y)++;
        n/=10;
    }
}

int main(void){
    srand(time(NULL));

    int sequenza[10], i, x, y, apparizioni_x, apparizioni_y;
   
    printf("8=>");
    scanf("%d", &x);
    printf("8=>");
    scanf("%d", &y);
    
    for (i = 0; i < 10; i++){
        sequenza[i] = rand() % 991 + 10;
        printf("%d)%d\n", i + 1, sequenza[i]);
    }

    printf("%d appare in:\n", x);
    for (i = 0; i < 10; i++){
        numero_apparizioni(x, y, sequenza[i], &apparizioni_x, &apparizioni_y);
        if(apparizioni_x != 0)
            printf("%d\n", sequenza[i]);
    }

    printf("%d appare in:\n", y);
    for (i = 0; i < 10; i++){
        numero_apparizioni(x, y, sequenza[i], &apparizioni_x, &apparizioni_y);
        if(apparizioni_y != 0)
            printf("%d\n", sequenza[i]);
    }

    printf("%d e %d appaiono in:\n", x, y);
    for (i = 0; i < 10; i++){
        numero_apparizioni(x, y, sequenza[i], &apparizioni_x, &apparizioni_y);
        if(apparizioni_x != 0 && apparizioni_y != 0)
            printf("%d\n", sequenza[i]);
    }

    return 0;
}
