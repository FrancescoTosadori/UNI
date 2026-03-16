#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    struct{
        char nome[20];
        char cognome[20];
    }anagrafica;
    float tempo;
}cronometro;

//Ricerca
int cerca(cronometro c[], int n/*quantità di partecipanti*/, char trova[]/*punta al nome del partecipante da cercare*/){
    int i;
    for (i = 0; i < n; i++){
        if(strcmp(c[i].anagrafica.nome, trova) == 0){
            return i;
        }
    }
    return -1;
}

//Inserimento diretto
int inserimento_diretto(cronometro c[], int n, char nome[], float tempo){
    int i,j;
    for (i = 0; i < n && strcmp(c[i]))
}

