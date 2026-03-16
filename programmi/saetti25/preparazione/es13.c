#include <stdio.h>

#define DIM 3

typedef struct{
    int giorno;
    int mese;
    int anno;
}data;

//Produce 1 se la data1 precede la data2 ee 0 altrimenti
int data_precede(data data1, data data2){
    if (data1.anno < data2.anno) return 1;
    if (data1.anno == data2.anno && data1.mese < data2.mese) return 1;
    if (data1.anno == data2.anno && data1.mese == data2.mese && data1.giorno < data2.giorno) return 1;
    return 0;
}

int nr_date_precedenti(data *lista, data dt, int dimensione_lista){
    int i, contatore = 0;

    for (i = 0; i < dimensione_lista; i++)
        if (data_precede(*(lista + i), dt)) contatore++;
    return contatore;
}

int main(void){
    int i;
    data lista[DIM];

    for (i = 0; i < DIM; i++){
        printf("giorno %d ", i + 1);
        scanf("%2d", &lista[i].giorno);
        printf("mese %d ", i + 1);
        scanf("%2d", &lista[i].mese);
        printf("anno %d ", i + 1);
        scanf("%2d", &lista[i].anno);
    }

    printf("\nil numero di date che precedono %d/%d/%d è: %d",
            lista[DIM-1].giorno,
            lista[DIM-1].mese,
            lista[DIM-1].anno,
            nr_date_precedenti(lista, lista[DIM-1], DIM)
            );

    return 0;
}
