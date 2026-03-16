/*
Permettere a due giocatori (umani) di effettuare una partita al classico gioco del tris. Il gioco prevede la presenza di una griglia 3×3 sulla quale i giocatori posizionano, ciascuno rispettando il proprio turno, una X o un O. Ovvero ciascun giocatore immette da tastiera le coordinate della casella all'interno della griglia nella quale posizionare il proprio contrassegno. La partita termina quando uno dei due giocatori riesce a mettere tre simboli uguali sulla stessa riga, sulla stessa colonna oppure su una delle due diagonali della griglia. Se nessuna di queste condizioni si verifica, la partita termina con un pareggio.
*/
#include "stdio.h"
#define DIM 3
//eleva una base ad un esponente
int potenza(int base, int esponente){
    int i,risultato = 1;
    for(i = 0; i < esponente; i++){
        risultato *= base;
    }
    return risultato;
}
//restituisce 1 se ha vinto il giocatore 1, 2 per il giocatore 2 e 3 in caso di pareggio, altrimenti 0.
int vincitore(int mat[][DIM]){
    int i,j,prodotto;//ho pensato di risolvere il problema calcolando un prodotto degli elementi; non è il modo più chiaro, semplice od elegante di risolvere questo problema ma funziona
    //righe
    for(i = 0; i < DIM; i++){
        prodotto = 1;
        for(j = 0; j < DIM; j++){
            prodotto *= mat[i][j];
        }
        if(prodotto == 1) return 1;
        if(prodotto == potenza(2,DIM)) return 2;
    }
    //colonne
    for(i = 0; i < DIM; i++){
        prodotto = 1;
        for(j = 0; j < DIM; j++){
            prodotto *= mat[j][i];
        }
        if(prodotto == 1) return 1;
        if(prodotto == potenza(2,DIM)) return 2;
    }
    //diagonali
    prodotto = 1;
    for(i = 0; i < DIM; i++){
        prodotto *= mat[i][i];
    }
    if(prodotto == 1) return 1;
    if(prodotto == potenza(2,DIM)) return 2;
    
    prodotto = 1;
    for(i = 0; i < DIM; i++){
        prodotto *= mat[i][DIM-1-i];
    }
    if(prodotto == 1) return 1;
    if(prodotto == potenza(2,DIM)) return 2;

    //Pareggio
    prodotto = 1;
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            prodotto *= mat[i][j];
        }
    }
    if(prodotto != 0){
        return 3;
    }

    return 0;
}
//stampa la matrice; 1 stampa una X, 2 stampa una O e 0 stampa uno spazio
void visualizza(int mat[][DIM]){
    int i,j,k;

    printf("\n");
    for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            switch(mat[i][j]){
                case 0: printf("%c", ' '); break;
                case 1: printf("%c", 'X'); break;
                case 2: printf("%c", 'O'); break;
            }
            if(j < DIM - 1)printf("|");
        }
        if(i < DIM - 1){
            printf("\n");
            for(k = 0; k < 2*DIM - 1; k++) printf("-");//riga di separatori
            printf("\n");
        }
        else printf("\n");
    }
}

int main(void){
    int griglia[DIM][DIM] = {},x,y;

    visualizza(griglia);
    for(int turni = 0; vincitore(griglia) == 0; turni++){
        if(turni % 2 == 0){ //se tocca al giocatore 1 (X)
            do{
                printf("Giocatore 1 (X): posizione da sinistra? (intero tra 1 e %d) ==>",DIM);
                scanf("%d", &y);
                printf("Giocatore 1 (X): posizione dall'alto? (intero tra 1 e %d) ==>",DIM);
                scanf("%d", &x);
            }while(griglia[x-1][y-1] != 0); //verifica che la casella non sia già occupata
            griglia[x-1][y-1] = 1;
        }
        else{ //se tocca al giocatore 2 (O) (stesso ciclo e comportamento del blocco sopra)
            do{
                printf("Giocatore 2 (O): posizione da sinistra? (intero tra 1 e %d) ==>",DIM);
                scanf("%d", &y);
                printf("Giocatore 2 (O): posizione dall'alto? (intero tra 1 e %d) ==>",DIM);
                scanf("%d", &x);
            }while(griglia[x-1][y-1] != 0);
            griglia[x-1][y-1] = 2;
        }
        visualizza(griglia);
    }

    switch(vincitore(griglia)){
        case 1:
        printf("\nVince il giocatore 1 (X)!!!\n");
        break;
        case 2:
        printf("\nVince il giocatore 2 (O)!!!\n");
        break;
        case 3:
        printf("\nPareggio :(\n");
    }
    
    return 0;
}
