#include <stdio.h>

#define DIM 10

//Produrre 1 se due date stringhe sono diverse e produrre 0 altrimenti
int stringcmp(char *str1, char *str2, int lunghezza){
    int i;
    
    for (i = 0; i < lunghezza; i++)
        if(str1[i]!=str2[i]) return 1;
    
    return 0;
}

//Inizializzare una data matrice con una sequenza di 50 parole oppure con una sequenza formata da meno di 50 parole e che termina con la prima parola immessa uguale a “0″; produrre la quantità di parole acquisite
int inizializzaMat(char mat[][21], int n){
    int i, paroleAcquisite = 0; 
    char finecorsa[21] = "0";
    
    for (i = 0; i < n; i++){
        printf("%d==>", i);
        scanf("%20s", mat[i]);

        if(stringcmp(mat[i], finecorsa, 21) == 0)
            return paroleAcquisite;
        
        paroleAcquisite++;
    }
    
    return paroleAcquisite;
}

//Produrre 1 se una data stringa è palindroma e produrre 0 altrimenti
int palindroma(char str[], int n){
    int pos_finale, pos_iniziale;

    for(pos_finale = 0; str[pos_finale] != '\0'; pos_finale++);
    
    int lunghezza_parola = pos_finale;
    pos_finale--; 

    for(pos_iniziale = 0; pos_iniziale < lunghezza_parola; pos_iniziale++){
        if(str[pos_iniziale] != str[pos_finale]) return 0;
        pos_finale--;
    }
    
    return 1;
}

//Visualizzare tutte le parole palindrome acquisite.
int main(void){
    int i, len;
    char parole[DIM][21];
    
     len = inizializzaMat(parole, DIM);
   
    for(i = 0; i <= len; i++)
        if(palindroma(parole[i], DIM)) printf("\n%s", parole[i]);

    return 0;
}

