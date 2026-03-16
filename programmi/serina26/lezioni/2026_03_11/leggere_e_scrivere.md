2026_03_11
## Leggere file di testo

Le classi wrapper hanno sempre metodi ```parseTipodiDato``` per convertire le stringhe nel tipo di dato.
Gli array list possono contenere solo oggetti, e quindi bisogna usare le classi wrapper dei tipi primitivi. Per ogni primitivo c'è un wrapper.

Scrivere 
```java
Double d = 29.5;
//viene letto come
Double d = new Double(29.5);
```
Qui si parla di auto-boxing; si può fare anche l'auto-unboxing, che prende un Double e lo converte in un double primitivo.

```BigInteger``` serve per memorizzare numeri maggiori di 2^63. È quasi infinito: si può usare tutta la memoria disponibile del computer dedicata alla JVM. Servono metodi come ```.add()```,  ```.subtract()```, ```.multiply()```.

Un'altra classe del genere è ```BigDecimal```→ salva decimali esatti, specificando scala ed arrotondamenti. ```0``` salva cifre illimitate.

## Stampare i file in uscita
Conosciamo già ```print()``` e ```println()```, associati a ```System.out```. Si può usare anche ```printf()```, che funziona esattamente come in C. 

```java
System.out.printf("Ci sono %1.2f gradi");
```

Stampa un float con una cifra prima del . etc.
Ci sono vari flag possibili e varie configurazioni per usare printf; sono tutte presenti sulle slide. 
Esiste ```%n``` che va a capo come ```\n```, che non funziona su tutti i sistemi.

```java
PrintWriter out = new PrintWriter("output.txt");
//bisogna ricordarsi di fare il close: i caratteri sono messi nel buffer, e se il programma termina prima della scrittura si possono perdere i dati.
```
