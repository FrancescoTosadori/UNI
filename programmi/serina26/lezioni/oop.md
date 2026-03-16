2026.02.25

---

# Programmazione orientata ad oggetti
Permette di separare i dettagli minori dalle proprietà fondamentali del programma, organizzando meglio il tutto.
Il codice OOP è molto riutilizzabile e autodocumentato.
I metodi e le variabili pubblici sono gli aspetti principali delle classi, mentre gli attributi e metodi privati non dovrebbero interessare a chi programma qualcosa con la classe.
Java è stato creato appositamente per la programmazione orientata agli oggetti; C++ eredita invece quasi tutto da C (è possibile compilare del codice in C su C++).

#### JVM
Non si ha accesso diretto alle chiamate di sistema operativo, rendendo java più sicuro, avendo come intermediario la java virtual machine.

### Programmazione top down e bottom up
Nel caso della programmazione bottom up, sapere quali sono gli oggetti fondamentali ci permette di creare codice più riutilizzabile e più chiaro, mentre nel caso della programmazione top down si pensa più alle funzionalità che verranno poi raffinate durante lo sviluppo.

### Vantaggi
1. Organizzazione;
2. Codice riutilizzabile;
3. Programmazione bottom-up;
    - Significa che posso individuare degli oggetti per poi legarli tra loro.

Questi vantaggi portano ad una maggiore semplicità nel **risolvere classi di problemi simili**.

È utile il fatto che gli oggetti sono scatole chiuse: sappiamo come usarli, ma non dobbiamo preoccuparci di sapere come funzionano. Essenzialmente, si tratta di fornitori di servizi.

### Livelli di astrazione
- Sui **dati**
- Sul **controllo**

#### Astrazione sui dati
Permette di astrarre gli oggetti, rendendoli solo una struttura dati con particolari operazioni. Lavoreremo soprattutto sull'astrazione dei dati, sugli oggetti fondamentali dei nostri sistemi.

#### Astrazione sul controllo
Astrae le funzionalità; al posto di badare ai dettagli, si bada ai suoi input ed output, senza preoccuparsi delle minuzie tecniche. La vedremo alla fine del corso.

### Espansione del concetto di tipo di dato
Si può espandere il concetto di tipo di dato. Se prima era semplicemente l'insieme di valori che il dato può assumere, ora l'oggetto aggiunge anche un insieme di operazioni possibili sul dato.
Un oggetto cessa di essere una struttura dati, ma anche una serie di operazioni che possiamo eseguire su di essi, determinate dai metodi. È come quando in algebra si definiscono campi e spazi vettoriali.

Il vantaggio del nascondere la struttura dati è il fatto che si possono modificare i dati solo come è permesso dai metodi pubblici.

La classe si comporta come una fabbrica software che crea gli oggetti, detti istanze.
 - Attributi --> dati membro
 - Metodi --> funzioni membro

Un oggetto software ha uno stato (i valori dei suoi dati) e un comportamento (definito dai suoi metodi).

NB - Se si programma qualcosa è il caso di rendere più cose possibili private.

#### Coesione
Più una classe ha una responsabilità ristretta, più è coesa. Cfr con la filosofia Unix. 

Se la ghé mia se rompe mia

#### Accoppiamento
Legami esistenti tra le varie classi; più dettagli hanno in comune, più sono accoppiate- high coupling. Se condividete i vostri attributi privati con un altro oggetto vi state accoppiando.
Conviene avere un basso accoppiamento.

#### Sicurezza
```java
public class Punto{
    public float x;
    public float y;
}
```
Gli attributi di questa "struct" possono essere modificati da chiunque abbia accesso alla classe, quando servirebbero dei metodi per modificare i dati.

Solo le costanti dovrebbe essere public, mentre i metodi per la maggior parte dovrebbero essere privati tranne gli essenziali.

#### Data hiding

```java
public class Persona{
    private int soldi;
    public final String telefono;
    public final String indirizzo;
}
```

Non posso accedere a 
```java
giuseppe.soldi();
```
Ma posso vedere 
```java
giuseppe.telefono();
giuseppe.indirizzo();
```
#### Package
Cartelle di lavoro, usate per organizzare e contestualizzare il nome di una classe/interfaccia.
La parola riservata package permette di gestire tutto ciò.

```java
package directory1.directory2.nomePacchetto; //tipicamente iniziano per caratteri minuscoli
import Classe1;//Indica i nomi delle classi che voglio importare
```

L'unico package importato automaticamente è java.lang.
Scrivere 

```java
package dir1.*
```
importa tutti i package trovati lì dentro. 

NB- il package mylib non verrà controllato per plagio durante l'esame.

## [UML](https://www.omg.org/uml/)

<center>
<img title="Unified Modelling Language"src="lezioni/2026_02_25/umlogo.png" height="150">

Unified Modelling Language</center>

È uno strumento grafico che permette di strutturare il codice prima ancora di mettersi a scrivere, per capire le interazioni eccetera. Vedremo solo i diagrammi delle classi.

Prima si passa dal codice UML, poi si passa al codice Java. Lo schema UML d'esempio è sul quaderno.

2026_03_04

## Libreria java
Contiene già migliaia di classi per molti scopi, assieme alla documentazione per usarle.
Ogni package ha dei nomi significativi e utili per gestire le classi.
Esempi di pacchetti sono:
```java
java.lang //fondamentali di uso comune
java.io //input/output
java.util //classi di utilità generale
java.math //variabili ecc.
```
Tipicamente si importano solo le classi di package rilevanti per il progetto.

Un package è un insieme di file java esportati come un .zip o un .class. La java library, essendo pubblica, rilascia anche i file .java.
Come utilizzare java.util.Random:
```java
import java.util.Random;
```
È possibile fare direttamente 
```java
java.util.Random();
```
al posto di importare ogni volta.

#### Classi istanziabili vs classi non istanziabili
Una classe è istanziabile se permette di creare degli oggetti, usando la parola chiave ```new```.
Hanno attributi e metodi.
Le classi non istanziabili sono classi di cui non ha senso fare il new. Non sempre è utile avere classi istanziabili; a volte è meglio separare il tutto per maggiore organizzazione. Non hanno attributi, o ne hanno solo di static, e hanno metodi solo ```static``` (come il ```main```). È inutile fare il ```new``` di una classe non istanziabile; otterremmo due oggetti che fanno esattamente la stessa cosa. 

La classe ```Math``` contiene solo attributi costanti come $\pi$ ed $e$. È inutile invocare 2 oggetti diversi che fanno la stessa radice quadrata. Non è impossibile istanziarla, ma tutti gli oggetti avrebbero lo stesso comportamento.

Mi basta fare ```Math.sqrt(4);```, e non è necessario dichiarare un nuovo oggetto così:
```java
Math m = new Math();
m.sqrt(4);
```
Funzionerebbe nello stesso modo (perché è in realtà lo stesso identico metodo). Non mi interessa creare un nuovo oggetto, mi basta che i metodi siano eseguiti direttamente dalla JVM. Tipicamente non hanno costruttori, perché hanno solo ```public static final```.

#### Static
Significa che esiste un'unica versione a livello di classe: appaiono una sola volta in memoria per tutte le istanze della classe.

Le classi istanziabili pure hanno solo le variabili non static, le non istanziabili pure avranno solo le static, mentre le ibride hanno un misto. Se un attributo è static, deve anche essere final perché sia una costante.

Si riconosce una classe istanziabile da se ha senso dire ```NomeClasse.metodo()``` piuttosto che ```istanza.metodo()```. Ad esempio:
```java
Persona.codice_fiscale(); //non ha alcun senso
```

***
Serina ha detto "la mia classe crea Mario Rossi, Ugo Negri etc.".
***

Metodi ed attributi e static non possono accedere a variabili ecc. non static!

Per differenziare le variabili nei metodi, si può scrivere un _ appena prima. Ad esempio:

```java
public Valuta(String _nome, double _tassoRif){
    nome = _nome;
    tassoRif = _tassoRif;
}
```

NB- se un metodo è static non può usare variabili non static.

### String e StringBuffer
String è una classe per creare stringhe costanti, mentre StringBuffer permette di cambiare il contenuto interno della stringa. L'array è modificabile, ma String è molto più rapido.

Le variabili hanno un nome e permettono di accedere agli oggetti, che sono solo una zona di memoria (DELLA JVM!). 

```String nome``` conterrà ```null```. Java è fortemente tipizzato perché ogi variabili ha un nome e un tipo. Le variabili strutturate non contengono l'oggetto, ma il suo indirizzo.

2 metodi possono avere nomi uguali se hanno attributi diversi in ingresso.

Il metodo ```String.equals()``` confronta il contenuto delle stringhe, mentre fare Stringa1 == Stringa2 confronta solo gli indirizzi in memoria.

---
2026_03_05

### Leggere e scrivere
Useremo uno scanner per ```system.in()```. 
La classe Scanner mette a disposizione metodi per leggere la tastiera.

Metodi utili sono:
```java
nextInt();
nextDouble();
next();
nextLine();
```

```unibsfplbib``` è un package con molte classi utili, e che evita molti errori inutili.

È sconsigliato leggere direttamente da ```System.in()``` perché legge un carattere per volta.
Scanner è comodo perché permette di lavorare anche con i file:
```java
FileReader reader = new Filereader("input.txt");
```

Esistono wrapper che permettono di lavorare con i tipi puri.
```java
Integer.parseInt(stringaInInput); //molto utile.
```
Auto boxing: si passa dal tipo Double a double etc., dal wrapper al tipo primitivo.

