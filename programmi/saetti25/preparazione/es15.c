#include <stdio.h>

#define DIM 5

int vocale(char carattere){
    if(carattere == 'a'||carattere == 'e'||carattere == 'i'||carattere == 'o'||carattere == 'u')
        return 1;
    return 0;
}

int rimuovi_vocali(char* stringa){
    int j, i = 0;

    while (*(stringa + i)){
        if(vocale(*(stringa+i)) && *(stringa+i) != '\0')
            for(j = i; *(stringa+j) != '\0'; j++)
                *(stringa+j) = *(stringa+j + 1);
        else
            i++;
    }
    return (int)stringa;
}

int main(void){
    int i;
    char parole[DIM][21];

    for (i = 0; i < DIM; i++){
        printf("8=>");
        scanf("%20s", parole[i]);
    }

    for (i = 0; i < DIM; i++){
        rimuovi_vocali(parole[i]);
        printf("\n%s", parole[i]);
    }

    return 0;
}
