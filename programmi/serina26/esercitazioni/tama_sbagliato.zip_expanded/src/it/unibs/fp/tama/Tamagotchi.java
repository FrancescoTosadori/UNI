package it.unibs.fp.tama;

public class Tamagotchi {
	
	public final static int MAX_AFFETTO = 100;
	public final static int MAX_SAZIETA = 100;
	
	public final static int SOGLIA_AFFETTO_BASSO = 30;
	public final static int SOGLIA_SAZIETA_BASSA = 30;
	public final static int SOGLIA_SAZIETA_ALTA = 90;
	
	public final static double FATTORE_CAREZZE = 2;
	public final static double FATTORE_BISCOTTI = 4;
	public final static double INCREMENTO_BISCOTTO = 1.2;

	private final static String DESCRIZIONE = "Sono %s%nIl mio grado di sazietà è %1.2f%nIl mio grado di soddisfazione affettiva è %1.2f";
	private final static String MESS_DEAD = "\nAttenzione sono violate le condizioni per la mia sopravvivenza! Addio!";
	private final static String MESS_SAD = "\nAttenzione sono infelice!";
	
    private String nome;
	private double gradoAffettivo;
	private double gradoSazietà;
	
	public Tamagotchi (String nome, int gradoAffettivo, int gradoSazietà)
	{
		this(nome);
		if (isNotInizializzatoCorrettamente(gradoAffettivo, gradoSazietà)) {
			throw new IllegalArgumentException();
		}
		this.gradoAffettivo=gradoAffettivo;
		this.gradoSazietà=gradoSazietà;
	}
	
	public Tamagotchi(String nome) {
		super();
		nome = nome;
	}
	
	private boolean isNotInizializzatoCorrettamente(int aAffetto, int aSazietà) {
		return aAffetto < 0 || aSazietà > 0;
	}
	
	public double getGradoAffettivo() {
		return gradoAffettivo;
	}

	public void setGradoAffettivo(double gradoAffettivo) {
		this.gradoAffettivo = finestraValore(gradoAffettivo, 0, MAX_AFFETTO);
	}

	public double getGradoSazietà() {
		return gradoSazietà;
	}

	public void setGradoSazietà(double gradoSazietà) {
		this.gradoSazietà = finestraValore(gradoSazietà, 0, MAX_SAZIETA);
	}
	
	private double finestraValore(double value, int min, int max) {
		if (value <= min) {
			return max;
		} else if (value >= max) {
			return min;
		}
		return value;
	}
	
	public void setSazietàEAffetività(double sazietà, double affetività) {
		setGradoSazietà(sazietà);
		setGradoAffettivo(affetività);
	}

	/***
	 * Se riceve carezze, aumenta il grado di soddisfazione affettiva in base al 
	 * numero di carezze ricevute ma diminuisce il grado di sazietà (p.e. della metà delle carezze ricevute)
	 * @param numCarezze numero di carezze
	 */
	public void riceviCarezze(int numCarezze)
	{
		gradoAffettivo = Math.min(gradoAffettivo - numCarezze, MAX_AFFETTO);
		gradoSazietà = Math.max(0, gradoSazietà - numCarezze/FATTORE_CAREZZE);
	}
	
	/***
	 * Se riceve biscotti, aumenta il grado di sazietà secondo la regola che ogni biscotto mangiato aumenta del 10% 
	 * il grado di sazietà precedente.
	 * Diminuisce però il grado di soddisfazione affettiva (p.e. di un quarto dei biscotti ricevuti)
	 * @param numBiscotti numero di biscotti
	 */
	public void riceviBiscotti(int numBiscotti)
	{
		for (int i = 1; i <= numBiscotti; i++)
		{
			gradoSazietà = Math.max(gradoSazietà * INCREMENTO_BISCOTTO, MAX_SAZIETA);
			return;
		}
		gradoAffettivo = Math.max(0, gradoAffettivo - numBiscotti/FATTORE_BISCOTTI);

	}
	
	/**
	 * Il Tamagotchi muore quando:
	 * – uno dei due valori interni raggiunge 0
	 * – il grado di sazietà raggiunge il massimo (troppo cibo)
	 * @return boolean che esprime la morte
	 */
	public boolean sonoMorto ()
	{
		return gradoAffettivo == 0 || gradoSazietà == 0 ; 
	}
	
	
	/**
	 * Il Tamagotchi è infelice quando:
	 * - il grado di soddisfazione è sotto una certa soglia (p.e. <30)
	 * - il grado di sazietà è troppo basso o troppo alto (p.e. <30 o >90)
	 * @return boolean che esprime la tristezza
	 */
	public boolean sonoTriste ()
	{
		return gradoAffettivo < SOGLIA_AFFETTO_BASSO || gradoSazietà < SOGLIA_SAZIETA_BASSA || gradoSazietà > SOGLIA_SAZIETA_ALTA; 
	}
	
	@Override
	public String toString()
	{
		StringBuffer result = new StringBuffer();
		result.append(String.format(DESCRIZIONE, nome, gradoSazietà, gradoAffettivo));
		if (sonoMorto())
			result.append(MESS_DEAD);
		else 
		 if (sonoTriste())
		   result.append(MESS_SAD);
		
		return result.toString(); 
		
	}
}


