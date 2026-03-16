/*------------------ASTRAZIONE DEI DATI------------------
C è tipizzato --> ad ogni variabile è assegnato un tipo.
    -int
    -char
    -float
    -double
Sono le variabili più basilari.
Vengono usate per dichiarare il tipo di varibile, secondo la sintassi:
<tipo> <elenco di identificatori> ;
Gli identificatori sono separati da una virgola.
Ad esempio:
int x,y;
Dichiara le variabili di tipo intero x ed y, riservando in memoria 4 byte per x e 4 per y. Sono riservati, dunque sono ad uso esclusivo di x ed y, ma i valori sono imprevedibili perché i 4 byte potrebbero contenere qualsiasi cosa.

Ci sono tante versioni di C, standardizzate dall'ANSI, American National Standards Institute, che ha formalizzato le varie versioni del linguaggio. Ci sono, ad esempio, C89 e C99, dove 89 indica l'anno di standardizzazione.
C89 prevede che le variabili devono essere dichiarate prima delle istruzioni eseguibili. Devono quindi essere dichiarate in testa alla funzione main, mentre in C99 è sufficiente scriverle prima della loro prima apparizioni in un'istruzione.
È comunque buona norma dichiarare le variabili in testa alla funzione, ma da C99 in poi non è più necessario.

A differenza dell'assembly, non è necessario assegnare un indirizzo di memoria, ma è necessario specificare la codifica e lo spazio occupato delle variabili.

Alcune variabili sono "a sola lettura", ovvero costanti, scritte con la sintassi:
const <tipo> <identificatore> ;
È impossibile reimpostare queste variabili.

Assegnazione di una variabile:
lvalue = exp;
lvalue = valore di sinistra (nome di una variabile)
exp = espressione, ovvero costanti, variabili o funzioni.
Il tipo di lvalue deve coincidere con exp, altrimenti avviene un CAMBIO DI TIPO.

È possibile concatenare l'operazione di assegnamento, dove:
x = y = 5;
equivale a 
x = (y = 5);
E dunque l'assegnazione è associativa a destra.

L'assegnamento si usa pure per variabili aggregate, ma non può essere usata per i vettori.

Casting automatico:
Avviene in 3 diverse circostanze:
    -con le operazioni aritmetiche relazionali;
    -con l'assegnamento;
    -invocando una funzione/quando una funzione ritorna un valore.
Focalizziamoci sulle prime due: 
    -Nel primo caso, il tipo più piccolo (in termini di quantità di byte dedicate al tipo stesso) è castato nell'altro.
    -
    
Casting esplicito
Mettere (<tipo>) prima di una variabile casta una variabile nel tipo specificato.
Gli operatori di casting hanno tre obiettivi:
    -documentare (rendere il programma più leggibile)
    -forzare conversioni
    -evitare overflow
Esempio di documentazione con operatori di casting:
    Se io scrivessi un programma in cui voglio ricordare il tipo di una variabile, posso scrivere (<tipo>) per chiarire.
Per gli altri scopi è facile intuire le situazioni in cui possono essere utili.

Overflow:
unsigned long int i;
unsigned short int j = 256;
i = j * j; --> quanto fa? fa 0, perché 256*256 = 2^16 che causa un overflow, anche se i è long int e potrebbe contenere 2^16. In questi casi è una buona idea utilizzare il casting.
*/

/*------------------ASTRAZIONE PROCEDURALE------------------
Serve per togliersi l'impiccio di non poter scrivere top down. Quindi ci permette di scrivere funzioni senza preoccuparsi di specificare man mano cosa facciano.
"Invocare una funzione svolge il mestiere per cui è stata scritta", ovvero il flusso di esecuzione viene modificato.
Si passa a svolgere gli step della funzione invocata. 
Un programma in C ha sempre almeno la funzione principale main(). Come tutte le funzioni, è definita tra una coppia di parentesi graffe.
Le funzioni possono restituire tipi diversi di dati, che viene specificato.
Le nostre funzioni main iniziano tutte così:

int main(void){
<contenuto della funzione>
return 0;
}

Sintassi per l'invocazione di una funzione:
<identificatore>(<arg1>,...,<argn>)
Gli argomenti sono elenchi di espressioni, anche l'invocazione di una funzione. 
Ci sono 2 tipi di funzioni: void (non ritornano niente) e procedure (regolari).
Le prime sono scritte su righe a sè stanti, mentre se lo facciamo con le funzioni regolari restituiscono un dato che viene perso.
*/
