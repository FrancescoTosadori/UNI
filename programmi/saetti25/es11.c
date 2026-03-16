//Acquisire da tastiera 5 volte due numeri naturali. Si considerino i naturali acquisiti come il dividendo ed il divisore di una divisione. Dopo avere acquisito tutti i naturali e calcolato tutti i quozienti interi e resti, visualizzare il quoziente intero di ciascuna divisione con resto zero.
#include<stdio.h>

int main(void){
    //acquisire 5 volte due numeri naturali
    int input[10];
    for(int i = 0; i < 10; i++){
        printf("-->");
        scanf("%d",&input[i]);
    }

    int output[5], dividendo, divisore;
    //Una volta determinati dividendo e divisore, eseguire la divisione e salvarla in output[] al corrispondente indirizzo (che è uguale all'indirizzo del dividendo / 2)
    for(int i = 0; i < 10; i++){ //consente la lettura di un dato alla volta
        //Usiamo gli switch per allenarsi
        switch(i % 2){//se la posizione è pari, abbiamo un dividendo
            case 0:
                dividendo = input[i];
                break;
            case 1:
                divisore = input[i];
                output[(i - 1) / 2] = dividendo / divisore;
                break;
        }
    }

    //stampiamo risultati contenuti nell'array output
    for(int i = 0; i < 5; i++){
        printf("%d\n",output[i]);
    }
    
}
