# Costrutti iterativi


## Ciclo ```for()```

```java
for({inizializzazione variabili}; {espressione booleana di permanenza}; {step}){
    istruzione semplice o composta;
    }
```

Prima di C si usava il ```goto```, che creava problemi di comprensione.


Solitamente vengono chieste 2 cose: 
 - Un loop che stampa i valori della variabile di ciclo;
 - i valori della variabile di ciclo.


Ovviamente non sono le stesse cose.


## Ciclo ```while()```

Stesso di C.
Le domande possibili sono 
 - Cosa viene stampato a video;
 - i valori delle variabili coinvolte.


## Break e continue

##### NB sull'elearning si trovano dei quiz di preparazione

I ```break``` servono per uscire dal ciclo, mentre i ```continue``` saltano all'iterazione successiva.

Esistono ``break`` con etichette per uscire da un loop specifico:
```java
first:
for(int i = 0; i < 10; i++){
    second:
    for(int j = 0; j < 10; j++){
        break second;
    }
}
```
Non è necessario usarli solo per i cicli for e while: si possono usare anche per nidi di istruzioni.
### NB non fare mai l'uguaglianza tra due double
