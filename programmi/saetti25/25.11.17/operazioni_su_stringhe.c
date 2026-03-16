#include "string.h"
#include "stdio.h"

int main(void){
    char str[] = "Banana";
    int len = strlen(/*puntatore ad una variabile carattere (const char *)*/str);//comoda da dichiarare dentro ad altre funzioni.
    printf("Lunghezza stringa Banana:%d\n",len);

    char str1[5],str2[5];
    strcpy(str2,str1); //→ non si può definire una stringa in corso d'opera, quindi questo si comporta come un inizializzatore. prototipo: char* strcpy(char *, const char *); Prende la stringa 1 e la mette nella stringa 2, regolando anche il carattere di fine stringa.
    //NB strcpy non gestisce la lunghezza delle stringhe!!!
    //la variante strncpy(), dove n sta per un tot numero di caratteri, funziona allo stesso modo ma ha 3 parametri: char*, const char*, int. L'int sta per la quantità di caratteri da copiare.
    
    //strcpy restituisce anche la posizione della stringa2. Anche printf e scanf restituiscono dei dati: printf() restituisce la lunghezza dei caratteri stampati e printf() restituisce il numero di dati acquisiti con successo.

    //NB non si può concatenare l'operatore di assegnamento, ma si possono concatenare le funzioni:
    strcpy(str2,strcpy(str1, "abcd"));

    char str_a[7] = "bla", str_b[] = "bla";
    strcat(str_a, str_b);//Concatena stringhe: char* strcat(char*,const char*);
    puts(str_a);
    //NB esiste strncat()

    //strcmp() confronta due stringhe tra loro. Prototipo: int strcmp(const char*, const char*);
    //Si tratta di una funzione che confronta se due stringhe sono lessicograficamente maggiori o minori.
    //0 se coincidono, -1 se la prima < seconda, +1 se prima > seconda.
    //trucco mnemonico: la scrittura if(strcmp(str1,str2) < 0) può essere vista come str1 < str2. Lo stesso trucco vale per strcpy con l'assegnamento: strcpy(str1,str2) → str1 = str2.
    
}