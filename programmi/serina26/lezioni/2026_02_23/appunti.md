2026.02.26

# LA COMPILAZIONE

### COMANDI

javac NomeClasse.java
java NomeClasse

### FILE SORGENTE

In java, ogni classe ha il suo file .java. Esso viene compilato in un file .class, che contiene il bytecode necessario per eseguire il programma sulla java virtual machine.

### VANTAGGI DELLA JVM

Un vantaggio è la sicurezza del prodotto: non potrà mai (?) uscire dalla java virtual machine, fornendo uno strato di protezione.
È anche in grado di fare chiamate di sistema e di parlare direttamente con l'hardware. È molto più semplice fare una jvm che un compilatore.

### FILE LIBRERIA

Vengono caricati assieme ai file classe al momento della compilazione.

# ERRORI

### ERRORI DI COMPILE TIME
Errori che si presentano durante la fase di compile: sono tipicamente i più facili da sistemare.
### ERRORI DI RUNTIME
Errori che si presentano durante l'esecuzione: ad esempio, una divisione per 0.

# CLASSI
Rappresentano una famiglia di oggetti dagli attributi simili.
presumendo di avere una classe chiamata [Assistant](Assistant/Assistant.java), entro a 

```java
public static void main(string args[]){

   Assistant assistente;
   assistente = new Assistant(); //crea l'oggetto assistente
   assistente.saluta(); //chiama il metodo saluta all'interno di assistente

}
```

assistente punta sempre alla zona dove parte l'oggetto, quindi pesa sempre 4 kB.

## CLASSE ASSISTENTE

```java
public class Assistant{

    private /*questa variabile è visibile solo ai membri della mia classe*/ final /*essendo final non può essere modificata*/ String MIO_SALUTO = "lo tiro fuori in public class e poi ti tocco nelle tue variabili private"; //le stringhe si mettono come variabili; le variabili sono sempre scritte in maiuscolo. Quando è parte di una classe è un attributo; in un metodo diventa una variabile.

    //Al posto di usare una costante, si può definire un attributo variabile. Se la variabile stringa non viene inizializzata, diventa la stringa nulla.
    public String nuovo_saluto;

    //Un costruttore è un metodo speciale che definisce i valori dei miei attributi
    public Assistant (String cosaDevoDire){ //può avere attributi in ingresso
        nuovo_saluto = cosaDevoDire;
    }

    public void saluta (){
        System.out.println(MIO_SALUTO);
    }
}
```

## DETTAGLI
### AUTODOCUMENTAZIONE
```java
/**Questi commenti servono a generare automaticamente la documentazione. Tag che iniziano con @ forniscono varie funzioni.
 */
```

### N.B. :
Se mostrate gli attributi in pubblico al professore ci possono essere dei problemi.

### Errori scemi
A volte il sistema non si accorge del fatto che c'è un errore di compilazione.
