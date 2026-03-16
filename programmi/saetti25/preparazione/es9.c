/*
Acquisire da tastiera 5 parole e successivamente per
ciascuna coppia di parole acquisite visualizzare un
messaggio che indica se le due parole della coppia sono
una l'anagramma dell'altra. Per svolgere questo compito
si definisca ed utilizzi due funzioni con le seguenti
finalità.
• Inizializzare gli interi in un dato vettore di 26 variabili
intere con il numero di volte per cui ciascuna lettera
compare in una data variabile stringa.
• Produrre 1 se due dati vettori di n variabili intere sono
uguali e produrre 0 altrimenti.
*/
#include <stdio.h>

#define DIM 5

//inizializzare gli interi in un dato vettore di 26 variabili intere con il numero di volte per cui ciascuna lettera compare in una data variabile stringa.
void conta(int contatore[], char stringa[]){
   int i;
   for(i = 0; i < 26; i++) contatore[i] = 0;
   
   for(i = 0; stringa[i] != '\0'; i++) contatore[stringa[i] - 'a']++;
}

int anagramma(char str1[], char str2[]){
    int contatore1[26], contatore2[26];
    
    conta(contatore1, str1);
    conta(contatore2, str2);
    
    int i;
    
    for(i = 0; i < 26; i++)
        if(contatore1[i] != contatore2[i]) return 0;
    return 1;
}

int main(void){
    char parole[DIM][21];
    int i;
    
    //acquisizione delle parole
    for(i = 0; i < DIM; i++)
        scanf("%20s", parole[i]);
    
    //verifica
    int j;
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            if(i == j) continue;
            if(anagramma(parole[i],parole[j]) == 1) printf("\n%s e %s sono anagrammi", parole[i], parole[j]);
        }
    }

}
