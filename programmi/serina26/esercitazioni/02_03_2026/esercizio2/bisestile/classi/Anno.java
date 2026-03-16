package classi;
public class Anno{
    private int numeroAnno;

    private final static int INIZIO_ANNO_SOLARE = 9;

    private final static int ANNO_SOLARE = 28;

    //costruttore numeroAnno (mantiene il nome della classe e non serve specificare un tipo di ritorno)
    public Anno(int numeroAnno){
        this.numeroAnno = numeroAnno;
    }

    public boolean bisestile(){
        if((numeroAnno % 4 == 0 && numeroAnno % 100 != 0) || numeroAnno % 400 == 0){
            return true;
        }
        else{
            return false;
        }
    }

    //NB this.numeroAnno è come scrivere numeroAnno, a meno che sia stato creato un parametro con lo stesso nome
    public int conta_cicli_solari(){
        return ((numeroAnno + INIZIO_ANNO_SOLARE) / ANNO_SOLARE + 1);
    }
}