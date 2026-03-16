/*
Si consideri una successione di date del calendario tale che:

    le date sono casualmente determinate da un intero pseudo-casuale compreso tra 1 e 31, un intero psuedo-casuale compreso tra 1 e 12, e un intero pseudo-casuale compreso tra 0 e 99 
    la successione termina con la decima data valida.

Visualizzare le dieci date valide casualmente estratte. Acquisire da tastiera una data. Successivamente inizializzare e visualizzare una sequenza ordinata di date con le date valide casualmente estratte che precedono la data acquisita. Per svolgere questo compito si definisca ed utilizzi cinque funzioni C con le seguenti finalità:

    Produrre 1 se un anno è bisestile e 0 altrimenti.

    Produrre 1 se una data data del calendario è valida e 0 altrimenti.

    Visualizzare le date in un dato vettore di n date del calendario.

    Produrre 1 se una data data del calendario precede una seconda data data del calendario

    Inserire una data data del calendario in un data sequenza (ordinata) di n date del calendario mantenendo l'ordinamento della sequenza.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//dimensione della lista
#define DIM 10

//struttura data
typedef struct {
    int giorno;
    int mese;
    int anno;
}data;

//produce 1 se bisestile e 0 altrimenti
int bisestile(data dt){
    if(!(dt.anno % 4)) return 1;
    else return 0;
}

//produce 1 se dt1 precede dt2 e 0 altrimenti
int precede(data dt1, data dt2){
    if(dt1.anno < dt2) return 1;
    if(dt1.anno == dt2.anno && dt1.mese < dt2.mese) return 1;
    if(dt1.anno == dt2.anno && dt1.mese == dt2.mese && dt1.giorno < dt2.giorno) return 1;
    return 0;
}

//produce 1 se la data è valida e 0 altrimenti
int dataValida(data dt){
    if(dt.mese == )
}

int main(void){
    
    //lista di 10 date
    srand(time(NULL));
    data lista[DIM];
    int i;
    
    for (i = 0; i < DIM; i++){
        lista[i].giorno = rand() % 30 + 1;
        lista[i].mese = rand() % 13;
        lista[i].anno = rand() % 100;
        printf("\n%02d/%02d/%02d",lista[i].giorno,lista[i].mese,lista[i].anno);
    }
    
    
}
