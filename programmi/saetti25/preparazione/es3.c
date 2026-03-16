/*Riempire una sequenza con 10 orari, i minuti e le ore di
ciascun dei quali è un intero pseudo-casuale compreso
rispettivamente tra 0 e 59 e tra 0 e 23. Successivamente
acquisire due orari (hh:mm) x ed y da tastiera. Rimuovere
dalla sequenza gli orari che non sono compresi tra x e y e
visualizzare la sequenza risultante. Per svolgere questo
compito si definiscano 3 funzioni con le seguenti finalità.
• Produrre 1 se un dato orario è inferiore ad un dato
secondo orario
• Rimuovere da una data sequenza di orari gli orari che non
sono compresi tra due dati orari
• Visualizzare una data sequenza di orari*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

typedef struct{
    int ore;
    int minuti;
}orario;

//Ritorna 1 se l'orario a è minore dell'orario b
int timecmp(orario a, orario b){
    if(a.ore > b.ore) return 0;
    else if(a.ore == b.ore && a.minuti > b.minuti) return 0;
    return 1;
}

void rimuovitra(orario a, orario b, orario vett[], int n){
    int i;
    orario min,max;
    if(timecmp(a,b)==1){min = a;max=b;}
    else{min = b;max=a;}

    for(i = 0; i < n; i++){
        if(timecmp(min,vett[i])==1 && timecmp(vett[i],max)==1){
            vett[i].ore = 0;
            vett[i].minuti = 0;
        }
    }

}

void visualizzaorari(orario sequenza[], int n){
    printf("\noutput di visualizzaorari\n");
    int i;
    for (i = 0; i < n; i ++){
        printf("\n%02d:%02d",sequenza[i].ore,sequenza[i].minuti);
    }
}

int main(void){
    srand(time(NULL));
    
    orario orari[DIM];
    int i;

    for (i = 0; i < DIM; i++){
        orari[i].ore = rand() % 24;
        orari[i].minuti = rand() % 60;
        printf("\n%02d:%02d",orari[i].ore,orari[i].minuti);
    }

    orario x,y;
    printf("\n==>");
    scanf("%d:%d",&x.ore,&x.minuti);
    printf("\n==>");
    scanf("%d:%d",&y.ore,&y.minuti);
    printf("\nRimozione degli orari tra %02d:%02d e %02d:%02d",x.ore,x.minuti,y.ore,y.minuti);

    rimuovitra(x,y,orari,DIM);
    visualizzaorari(orari,DIM);

    return 0;
}
