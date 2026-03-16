#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main(void){
    //Dichiarate usando due cicli for annidati uno dentro l'altro. L'ordine dei cicli determina se la matrice è riempita per righe o per colonne.

    printf("Esempio 1:\n");
    //Considerare una matrice 5 righe * 9 colonne. Inserire interi pseudocasuali compresi tra -3 e 12
    srand(time(NULL));
    int i, j, mat[5][9];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 9; j++){
            mat[i][j] = (rand() % 16) - 3;
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //stampiamo la trasposta
    for(j = 0; j < 9; j++){
        for(i = 0; i < 5; i++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("Esempio 2:\n");
    //Definiamo una matrice 5x9 con elementi tra -60 e 60
    int mat2[5][9];
    for(i = 0; i < 5; i++){
        for(j = 0; j < 9; j++){
            mat2[i][j] = (rand() % 121) - 60;
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    //Visualizziamo la colonna con più interi positivi: 
    //NB non funzia lmao
    int positivi_per_colonna = 0, max_per_colonna = 0, best_colonna;
    for(i = 0; i < 5; i++){
        positivi_per_colonna = 0;
        for(j = 0; j < 9; j++){
            if(mat[j][i] > 0) positivi_per_colonna++;
            if(positivi_per_colonna > max_per_colonna){
                max_per_colonna = positivi_per_colonna;
                best_colonna = i;
            }
        }
    }

    printf("\n\nColonna con più numeri positivi: %d\n", best_colonna);
    for(i = 0; i < 5; i ++){
        printf("%d\n", mat[i][best_colonna]);
    }

    
    return 0;
}
