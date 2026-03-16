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

