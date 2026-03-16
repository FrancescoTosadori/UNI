2026.02.26

# Tipi di dati

I dati primitivi sono praticamente gli stessi di C. 
In Python un intero è visto come un oggetto: non è un numero codificato, ma un indirizzo che punta alla casella di memoria dove è contenuto il numero. In java e C++ le variabili sono puntatori che puntano agli oggetti. Per questioni di efficienza sono stati introdotti tipi di variabili intere: anzichè essere [puntatori](oop.md#JVM), sono direttamente un contenitore contenente un numero.

Ci sono 3 tipi di dati:
 1. Primitivi
    - boolean
    - byte 
    - short 
    - int
    - double
    - long
    - char
    - void
    - etc...
    - non si possono definire tipi primitivi
 2. Strutturati 
    - String
    - altre classi della Java.lang library
    - classi create dal programmatore
 3. [Enumerati](../saetti25/25.12.15/variabili_d'enumerazione.c)
    - Sono solo definiti dal programmatore, come ad esempio le stagioni

#### Void
Serve come tipo di ritorno per metodi che non devono restituire nulla. È un caso limite

#### Tipi semplici
Codificano entità singole ed elementari, come numeri, caratteri, etc.

#### Numeri maggici
```java
double cifraInLire, cifraInEuro;
final double LIRE_PER_EURO = 69420.67

cifraInLire = cifraInEuro * 62420.67; //no
cifraInLire = cifraInEuro * LIRE_PER_EURO; //sì
```

#### NB- la parola chiave sarà vista la prossima volta, ma è utile per le costanti.

#### Tipo char
Di default è pari a \0, ma ci sono i vari caratteri di Unicode 16 bit con:
 - \n → newline
 - \t → tab
 - etc...

#### Tipi interi
 - byte [-128,+127\]
 - short [-32769,+32767\]
 - int (32 bit, circa 2 miliardi)
 - long (64 bit, circa 2^63)

#### Numeri a virgola mobile
Ci sono sia i float che i double, ed è consigliato usare i double.

### Errori comuni: le operazioni
Stampa k e poi lo incrementa.
```java
System.out.println(k++);
```

Incrementa k e poi lo stampa.
```java
System.out.println(++k);
```

Esiste un operatore logico &, che è lo stesso operatore di && ma che valuta tutte le proposizioni senza saltare all'istruzione successiva appena incontra una proposizione falsa.

Con i numeri in virgola mobile, == può dare risultati strambi. Può avvenire che per via degli errori di arrotondamento i risultati siano lievemente diversi. In questo caso conviene usare $ | a - b| < ε $

### Inizializzazione
In Java i dati vengono sempre inizializzatia  0.

Inizializzare con 0x:
```java
long ex = 0x10;
```
inizializza un numero decimale.

Se due dati sono compatibili, significa che li si può assegnare senza perdita di informazione. Ad esempio, un intero può essere assegnato ad un float ma non viceversa. I dati compatibili sono assegnabili tra loro, non viceversa.

I dati possono essere castati come in C. L'upcasting è automatico, il downcasting no.

Nota bene- i tipi boolean prendono valori
```java
true
false
```
non 1 e 0.

### Dati enum
Un insieme di etichette che rappresentano i possibili valori predefiniti di una variabile in un certo contesto.
Si tratta di una definizione speciale di classe.

```java
public enum Stagione{
    PRIMAVERA, ESTATE, AUTUNNO, INVERNO
}

[...]

Stagione periodo;
periodo = Stagione.PRIMAVERA; //o altro valore in lista

[...]
```
Il metodo .ordinal() è sempre presente nelle classi enum, e restituisci la posizione delle varie entrate.
```java
periodo.ordinal();
``` 
restituisce la posizione 0 per PRIMAVERA, 1 per ESTATE etc.
