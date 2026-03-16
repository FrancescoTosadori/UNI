#include <stdio.h>

int main(void){
    	printf("Lezione del 7.11.25: Astrazione sui dati (array)\n");
   	/*Dichiarazione degli array:
	In C89, gli array sono da definire prima della funzione main, mentre dalla versione successiva in poi ciò non è più necessario.
	La sintassi è molto simile alle variabili classiche: 
	~tipo di variabili contenute  ~identificativo[~espressione intera costante]
	NB è importante dichiarare le dimensioni dell'array per sapere quanta memoria riservare.
	Le macro sono specificate con la direttiva #define, seguita da un tag (in genere scritto in maiuscolo) ed una o più istruzioni.
	*/
	
	/*Inizializzazione di un vettore
    	In base al momento in cui viene dichiarato il vettore, si usano sintassi diverse.
	int vett[7] = {1,2,3,4,5,6,7}; → dichiara la riserva in memoria di 7 byte, oltre al dichiarare cosa codificare in ognuna. Se l'inizializzatore ({}) è più corto, allora viene inizializzata solo la prima parte del vettore. Il valore di default è 0. Se l'inizializzatore è lungo esattamente quanto la dimensione, non serve dichiarare la dimensione.
	Vettori e cicli for sono besties, ad esempio per azzerare un vettore è necessario un ciclo ed il ciclo for è il più comodo.
	Per generare un vettore con dati casuali, basta usare le funzioni rand() srand(). 
	int rand(void) → questo prototipo significa che non serve un input e che restituisce in output un intero, compreso tra 0 e RAND_MAX, una macro. Gli interi sono pseudocasuali: non sono correlati tra loro, ma sono estratti da una successione ricavata da un seme (di default il seme == 0). Se il seme è lo stesso, il primo numero è sempre lo stesso. Per cambiare il seme si usa srand():
	void srand(int); → non restituisce niente, ha bisogno di un intero per definire uns eme. Per "randomizzare" il seme, si usa:
	srand(time(NULL)); che imposta il seme al numero di secondi passati dal 1° gennaio 1970.
	Queste istruzioni sono in genere incluse in stdio.h, ma a volte sono nella stdlib.h.
	*/	
	
	/*Esercizio: Acquisire 5 interi e visualizzare quanti divisori ha ciascun intero
	for(int i = 0; i < 4; i++){
		int n;
		printf("-->");
		scanf("%d",&n);
		int divisori = 0;
		for(int j = 1; j <= n; j++){
			if(n % j == 0){
				divisori++;
			}	
		}
		printf("Divisori di %d = %d\n", n, divisori);
	}
	*/
	
	/*Esercizio: Acquisire una successione di naturali che termina con 0 e che, al termine dell'acquisizione stampa il numero di numeri primi.
	int n;
	int primi = 0;
	do{
		printf("-->");
		scanf("%d",&n);
		int divisori = 0;
		for(int j = 1; j <= n; j++){
			if(n % j == 0){
				divisori++;
			}	
		}
		if(divisori == 2){
			primi++;
		}
	}
	while(n != 0);
	printf("Numeri primi acquisiti = %d\n", primi);
	*/

	/*Generare numeri casuali: 
	rand()%(y-x+1) +x; → dove x è l'estremo inferiore e y l'estremo superiore.
	*/

	/*Esercizio: successione di numeri naturali che termina al 50esimo dato o all'acquisizione di 0. Visualizzare la successione al contrario.
	int n[50];
	printf("-->");
	scanf("%d",&n[0]);
	int i;
	for(i = 1; i < 50 && n[i - 1] != 0; i++){
		printf("-->");
		scanf("%d",&n[i]);
	}

	for(i = i - 1; i >= 0; i--){
		printf("%d\n", n[i]);
	}
	*/

	
	return 0;
}
