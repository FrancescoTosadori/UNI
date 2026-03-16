#include<stdio.h>

/*lista di argomenti:
    -esempi di utilizzo della funzione for
    -
*/

int main(void){
    printf("Lezione del 5.11.25\n");
    
    //Usi tipici della funzione FOR

    /*Contare da i a n
    int n = 10000;
    for(int i = 0; i <= n; i++){
        printf("%d\n",i);
    }
    */

    /*Fattoriale di n
    long int n;
    scanf("%ld",&n);
    for(long int i = n - 1; i > 0; i--){
        n *= i;
    }
    printf("fact(n) = %d\n", n);
    */

    /*Errori tipici con i cicli:
        -scambiare la condizione di permanenza con quella di uscita
        -non considerare i casi limite (off-by-one, etc.)
        -aggiungere un punto e virgola subito dopo la funzione for, while o do.
    */

    /*Acquisire da tastiera un naturale e visualizzare i suoi divisori
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
    */

    /*Acquisire due interi ne m, visualizzare la sommatoria da i = n a m di 2i
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int ris = 0;
    for(int i = n; i <= m; i++){
        ris = ris + 2*i;
    }
    printf("risultato = %d\n", ris);
    */

    /*Acquisire da tastiera 5 volte due numeri naturali. Stampare il quoziente intero ed il resto dopo ogni coppia di acquisizione.
    int dividendo,divisore;
    for(int i = 0; i < 5 ;i++){
        scanf("%d%d", &dividendo, &divisore);
        printf("Quoziente intero = %d\nresto = %d\n", dividendo/divisore, dividendo%divisore);
    }
    */

    //NB può essere utile usare la virgola nelle tre espressioni della funzione for per poter usare più variabili contatore in parallelo.

    /*I cicli possono anche essere annidati senza problemi. Si può anche usare i contatori esterni per definire contatori nei cicli interni, ma non viceversa.
    */

    /*Acquisire un numero n e visualizzare una piramide di naturali che abbiano i volte il contatore i, con i da 1 fino a n
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) printf("%d",i);
        printf("\n");
    }
    */

    /*Istruzioni break, continue e return
        -break → serve per interrompere la struttura di controllo in esecuzione (switch, cicli)
        -continue → usata con i cicli, si usa per passare oltre all'iterazione successiva, utile quando le condizioni vanno iterate solo su specifiche circostanze.
        -return → usata per restituire dati utili da una funzione.
    */

    return 0;
}
