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