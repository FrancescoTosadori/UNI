//Durata di memorizzazione, scope, luogo

/*
Finora abbiamo usato variabili locali, definite nella funzione main o in funzioni specifiche.
Abbiamo visto anche i parametri (#define).
La "durata di memorizzazione" (è la parte del flusso di esecuzione nel quale la variabile esiste) può essere:
    -automatica → quando il flusso d'esecuzione entra nello scope della variabile (per i comuni mortali: quando il codice nel quale la variabile è accessibile viene eseguito); quando l'esecuzione cessa, le variabili vengono rimosse.
    -statica → una volta creata la variabile, a prescindere dal flusso d'esecuzione la memoria resta dedicata alla variabile fino alla fine dell'esecuzione.
Lo "scopo" è la porzione di codice nel quale la variabile è visibile
    -di blocco (tra due graffe)
    -di funzione
    -di file/progetto --> un progetto ha più file separati
Il "luogo" è dove la variabile è memorizzata:
    -in memoria
    -nei registri → più raro, viene fatto per velocizzare il codice: non è necessario caricare i valori dalla memoria.
*/

/*tipi di variabili conosciute finora:
    -locali
        -durata automatica
        -scope limitato alla funzione (di solito main, ma anche funzioni secondarie.)
        -luogo: memoria centrale
    -parametri
        -
*/

//La parola chiave static crea una variabile a durata di memoria statica.
//static int tuaMadre = 1; → vale anche per una seconda chiamata di funzione.

//NB scrivere return ++count è diverso da scrivere return count++; nel secondo caso, ++ ha una priorità più bassa.

int conta(void){
    static int count = 0;
    return ++count;
}

#include "stdio.h"
int main(void){
    for (int i = 0; i < 10; i++){
        printf("%d\n", conta());
    }
    return 0;
}

//register è una parola chiave per dire al computer di memorizzare la variabile in un registro della CPU --> usato per i contatori che ci servono spesso. I compilatori moderni sono in grado di decidere per conto proprio quando salvare una variabile come registro o come memoria. Quindi niente non serve a un cazzo ora.

//Variabili globali o esterne: dichiarate esternamente alle funzioni. → scope relativo all'intero file (manutenzione più complicata, difficile riutilizzare funzioni etc.) NB non usarle se l'esercizio non lo richiede
