#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//Possiamo fare strutture di strutture

typedef struct {
    struct{
        char nome[20];
        char cognome[20];
    }anagrafica;
    float tempo;
}cronometro;

int main(void){
    cronometro c;
    strcpy(c.anagrafica.nome, "Mario");
    strcpy(c.anagrafica.cognome, "Coglione");
    c.tempo = 69;
}
