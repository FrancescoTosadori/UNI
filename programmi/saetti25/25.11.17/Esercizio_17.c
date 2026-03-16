//Acquisire dieci parole lunghe max 20 caratteri. Visualizzare il numero di parole che precedono lessicograficamente l'ultima
#include "stdio.h"
#include "string.h"

int main(void){
    char parole[10][21], ultima[21] = "";
    for(int i = 0; i < 10; i++){
        scanf("%20s",&parole[i]);
    }
    
    int minori = 0;
    for(int i = 0; i < 9; i++){
        if(strcmp(parole[i],parole[9]) < 0){
            minori++;
        }
        if(strcmp(parole[i], ultima) > 0){
            strcpy(ultima, parole[i]);
        }
    }

    printf("minori =%d\n",minori);
    printf("ultima parola in ordine lessicografico =%s\n",ultima);
    return 0;
}
