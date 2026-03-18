# Definire metodi
È una buona scomporre i metodi pubblici in tanti piccoli metodi privati. Eclipse può estrarre porzioni di codice. Se si ripetono varie sequenze di istruzioni più volte, conviene slapparle in un metodo (alla prova di laboratorio chiedono di farlo).

Strutturare bene il codice è importante:
 - non mettere stringhe e costanti numeriche nel codice, ma usare variabili.
 - Metodi comuni sono ``toString()``, 
 - Piccolo è bello: il main deve essere snello ([_chorus_] mi piace il pisello) 
 e i metodi devono rientrare tutti nello stesso metodo. È importante anche semplificare il più possibile il codice.

Si possono avere metodi diversi con nome uguale, se la lista di argomenti formali è la stessa [overloading]. I valori di ritorno non distinguono l'overloading. 

Si possono avere tanti costruttori quanto si vuole, ma devono essere distinti dal tipo di dato in entrata. 

## Passaggio degli argomenti
Sono passati per valore! Viene creata una copia locale del valore passato.

Faremo qualche disegnino su un foglio (vedi quaderno)

## Scope delle variabili

Beh non c'è molto da dire.

## Vita delle variabili locali

Pota casso non è diverso da C. 

Non serve ottimizzare il codice, è più importante che sia elegante. (doubt)

Gli oggetti muoiono nessuna variabile si riferisce più a quell'oggetto.

## Attributi

### Static
Creati tra le graffe di una classe, fuori dai metodi.  Esistono come unici esemplari, creati in memoria quando si fa l'import della classe. Non muoiono mai, vengono caricati quando viene fatto l'import della classe. Morirà quando viene chiuso il programma. È visibile dentro tutta la classe e, se definito pubblico, anche altre classi potranno vederlo. 
### Non static
Esistono nel momento in cui viene creato un new. 

## Variabili
Diversi dagli attributi, penso siano quelle usate per far funzionare le classi (ma non ne sono sicuro).

## Espressione
Funzione che va a calcolare un valore e fornisce un risultato. 

## Java è fortemente tipato (o tipizzato)
Il compilatore effettua molti più controlli sul fatto che i tipi siano al posto giusto.