#include<stdio.h>

/*Lista di argomenti:
	-switch
	-cicli while, do-while e for
	-nuovi operatori
*/

/*
int main(void){
    //a seconda del valore nell'argomento dello switch, eseguiamo la casistica corrispondente.
    int espressione_intera = 1;
    switch (espressione_intera) {
        case 1:
            printf("Saetti == D'Annunzio\n");
            break;
        default: //non deve essere sempre presente e non deve essere per ultimo
            break;
    }
    return 0; 
}
*/



/*
int main(void){
    int num;
    printf("inserisci una cifra binaria: ");
    scanf("%d",&num);
    switch (num) {
        case 0: printf("%d si pronunzia zero\n", num);
        break;
        case 1: printf("%d si pronunzia uno\n", num);
        break;
        default: printf("%d non è un carattere binario\n", num);
        break;
    }
    return 0;
}
*/



//L'istruzione switch è più veloce della cascata di if-else, perché salta direttamente al codice da eseguire. È tuttavia meno flessibile.

/*Istruzioni iterative
    -while() istruzione;
    -do istruzione; while() (ciclo a condizione finale)
    -for(exp1,exp2,exp3) istruzione;
*/



/*ciclo while (acq. num nat e visualizza la più piccola potenza di 2 superiore al naturale)

int main(void){
    int n;
    int ris = 1;
    printf("n? ");
    scanf("%d",&n);
    
    while(ris <= n){
        ris = ris * 2;
    }
    printf("risultato %d\n", ris);
}
*/



/*ciclo do while: acquisire da tastiera un naturale e visualizzare il numero di cifre che lo costituiscono

int main(void){
    int n;
    printf("n? ");
    scanf("%d",&n);
    int cifre = 0;

    do {
        n = n / 10;
        cifre = cifre + 1;
    }
    while(n != 0);
    printf("cifre %d\n", cifre);
    return 0;
}
*/



/*Esercizio 5: Acquisisci n, vedere se n > di n con le cifre invertite

int main(void){
    int n;
    printf("n = ");
    scanf("%d",&n);

    int inv_n = 0;
    int temp = n;
    int cifra;

    while(n > 0){
        cifra = n % 10;
        n = n / 10;
        inv_n = inv_n * 10 + cifra;
    }
    
    if(temp > inv_n){
        printf("%d è maggiore del suo inverso %d\n", temp, inv_n);
    }
    if(temp == inv_n){
        printf("%d è uguale al suo inverso %d\n", temp, inv_n);
    }
    if(temp < inv_n){
        printf("%d è minore del suo inverso %d\n", temp, inv_n);
    }
    return 0;
}
*/


/* Es 6
int main(void){
    int n1, n2;
    do{
        scanf("%d",&n1);
        if(n1 > 0){
            scanf("%d",&n2);
        }
    }
    while(n1 < 0 || n2 < 0);

    int quoziente = 0;
    int temp = n2;
    while(temp <= n1){
        temp = temp + n2;
        quoziente = quoziente + 1;
    }

    printf("quoziente intero = %d\n", quoziente);
}
*/

/*Acquisisci una successione di num nat che terminano con lo 0. Visualizzare il minimo tra i naturali acquisiti

int main(void){
    int x;
    scanf("%d", &x);
    int min = x;
    while(x != 0){
        if(x < min){
            min = x;
        }
        scanf("%d", &x);
    }
    printf("minimo = %d\n", min);
    return 0;
}
*/

/*
Ciclo for: ha 3 espressioni: la prima assegna una variabile contatore, la seconda assegna una condizione di permanenza, e la terza imposta il passo. N.B.: le espressioni sono separate da un punto e virgola. Questo esiste per semplificare la leggibilità dei programmi.

int main(void){
	for(int i = 0; i <= 25; i += 1){
		printf("%d\n",i);	
	}
	return 0;
}

Con il ciclo for si usano anche questi operatori:
	+=
	-=
	/=
	*=

*/
