#include "stdio.h"
#include "string.h"

int n;
int main(void){
    char parole[50][19];

    //usare un do{}while()
    for(int i = 0; i < 50; i++){
        scanf("%19s",parole[i]);
        if(strcmp(parole[i], "fine") == 0){
            n = i;      
            break;
        }
    }

    
    char parole_risultato[n][19];
    int risultato = 0;
    for(int i = 0; i < n - 1; i++){
        if(strcmp(parole[i],parole[n]) < 0){
            strcpy(parole_risultato[i],parole[i]);
            risultato++;
        }
    }
    
    for(int i = 0; i < n - 1; i++){
        puts(parole_risultato[i]);
    }

    
}