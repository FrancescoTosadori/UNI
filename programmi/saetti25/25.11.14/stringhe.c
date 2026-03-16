#include "stdio.h"
//#include "stdlib.h"
//#include "time.h"
//#include "string.h"

int main(void){
  //Le stringhe hanno un carattere di fine stringa \0, alla quale corrispondono 8 bit pari a 0.
  char *pc = "abc"; //imposta il puntatore pc all'indirizzo del primo carattere della stringa.
  //Le variabili del programma sono contenute in altre aree di memoria rispetto a quelle in cui sono conservate le istruzioni.
  //Anche le stringhe possono essere indicizzate. 
  char cifra = "0123456789abcdef"[5]; //Codifica il numero nell'indice in base HEX
  //Le stringhe in C vengono codificate direttamente con i caratteri, che però hanno una complessità maggiore, dovuta alla gestione del carattere di fine stringa e dalla difficoltà del determinare la lunghezza della stringa.
  char str[7] = {'n','o','v',' ','1', '4', '\0'}; //Dichiara una stringa con la data di oggi. È importantissimo il carattere di fine stringa perché è usato da molte funzioni che gestiscono le stringhe. Per semplificare l'inizializzazione, si può fare direttamente uso dei doppi apici.
  char str1[7] = "Nov 15"; //Stessa cosa della riga 12 ma inizializzato con i doppi apici.
  //Quando il vettore è più lungo della sequenza di inizializzazione, le variabili non direttamente impostate sono azzerate.
  //NB la libreria per le stringhe è string.h
  printf("%10s\n", str1); //visualizza il contenuto della stringa, indentandola alla destra di un campo da 10.
  puts(str1); //prototipo: int puts(char *) (serve un puntatore ad una variabile carattere)
  //NB puts va automaticamente a capo. Inoltre, restituisce la lunghezza della stringa.
  scanf("%s", str); //Scrivere un vettore non indicizzato restituisce semplicemente l'indirizzo della prima variabile del vettore.
  //Nb scanf ignora tutti i caratteri di spaziatura, terminando l'acquisizione appena appare un carattere di spaziatura
  scanf("%6s",str);//acquisisce 6 caratteri e li mette in str.
  
}
