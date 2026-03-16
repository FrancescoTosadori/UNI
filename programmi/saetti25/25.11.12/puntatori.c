#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "stdef.h"

//Argomento: i puntatori
int main(void){
	//I puntatori si usano per salvare gli indirizzi delle variabili.
	//Una variabile puntatore p "punta" ad una variabile i se p è impostato all'indirizzo del primo byte di i.
	//Come dichiarare i puntatori:
	//int *p, i; //l'identificativo * si applica solo a p.
	//NULL equivale a 0, definizione inclusa in stdef.h, a sua volta inclusa in stdio.h.
	//&i ci restituisce l'indirizzo di i.
	//scrivere *p corrisponde a scrivere i.
	/*Aritmetica dei puntatori
	Supponiamo di aumentare p di 2: significa che la sua posizione aumenta del doppio del numero di byte
	necessari per salvare, in questo caso, un intero.
	Questo è utile nel caso degli array: se p punta alla prima variabile di un vettore, p + 2 punta alla terza.
	Nota bene → *(p+2) = p[2] !!! I puntatori possono essere usati come dei vettori !!!
	*/
	
	//esempio: come azzerare un vettore usando i puntatori.
	int v[5], *p;
	for(p = &v[0]; p < &v[5]; p++){
		*p = 0;
	}
}
