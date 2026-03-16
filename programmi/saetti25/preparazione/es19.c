/*
Riempire e visualizzare una tabella di 10 righe e 20 colonne con interi pseudo-casuali compresi 
tra 10 e 50. Si consideri le sequenze di interi presenti su ciascuna riga della tabella. 
Si visualizzi ciascuna di queste sequenze a cui sono rimossi i numeri non primi. Per svolgere 
questo compito si definisca ed utilizzi tre funzioni con le seguenti finalità
* Produrre 1 se un dato numero è primo; 0 altrimenti
* Rimuovere da una data sequenza di interi i numeri non primi producendo la nuova lunghezza 
  della sequenza
* Visualizzare una sequenza di n interi
*/

#include <stdio.h>
#include <stdlib.h>

#define DIMR 10
#define DIMC 20

int primo(int n)
{
	int i;
	
	for (i = 2; i < n; i++) 
		if (n % i == 0) return 0;
	return 1;
}

int rimuoviPrimi(int vet[], int n)
{
	int i = 0, j;
	
    while (i < n)
    {
            if (primo(vet[i]) == 1){
                    for (j = i; j < n; j++) vet[j] = vet[j + 1];
					n = n - 1;
            }
            else i++;      
    }
	return n;
}

void visualizza(int vet[], int n)
{
	int i;
	for (i = 0; i <n; i++) printf("%3d", vet[i]);
	printf("\n");
}

int main() 
{
	int mat[DIMR][DIMC], i, j, n;
   
	for (i = 0; i < DIMR; i++) 
	{
		for (j = 0; j < DIMC; j++) 
			mat[i][j] = rand() % 41 + 10;

		visualizza(mat[i], DIMC);
	}
    printf("Matrice senza primi:\n");    
	for (i = 0; i < 10; i++) 
	{
		n = rimuoviPrimi(mat[i], DIMC);
		if (n > 0) visualizza(mat[i], n);
		else printf("-\n");
	}	
		
	return 0;
}

