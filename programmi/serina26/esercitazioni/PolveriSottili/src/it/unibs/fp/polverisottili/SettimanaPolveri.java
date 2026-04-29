package it.unibs.fp.polverisottili;

public class SettimanaPolveri {
	private static final String COMMENTO_VALORE = "\nValore %d: %d";
	private static final String INTESTAZIONE = "Questa è la settimana %d dell'anno %d";
	public static final int SOGLIA_VALORE_MEDIO = 50;
	public static final int SOGLIA_VALORE_MASSIMO = 75;
	private int anno;
	private int numeroSettimana;
	private int [] misure;
	
	public SettimanaPolveri (int anno, int numeroSettimana, int [] misure) {
		this.anno=anno;
		this.numeroSettimana=numeroSettimana;
		this.misure=misure;
	}

	public int getAnno() {
		return anno;
	}

	public void setAnno(int anno) {
		this.anno = anno;
	}

	public int getNumeroSettimana() {
		return numeroSettimana;
	}

	public void setNumeroSettimana(int numeroSettimana) {
		this.numeroSettimana = numeroSettimana;
	}

	public int[] getMisure() {
		return misure;
	}

	public void setMisure(int[] misure) {
		this.misure = misure;
	}
	
	public int valoreMassimo() {
		int massimo = misure[0];
		
		for(int i = 1; i < misure.length; i++) {
			if (misure[i] > massimo) massimo = misure[i];
		}
		
		return massimo;
	}
	
	public double valoreMedio() {
		double totale = 0;
		
		for(int i = 0; i < misure.length; i++) totale += misure[i];
		
		return totale / misure.length;
	}
	
	public boolean allarmeMassimo() {
		if(valoreMassimo() > SOGLIA_VALORE_MASSIMO)
			return true;
		else
			return false;
	}
	
	public boolean allarmeMedio() {
		if(valoreMedio() > SOGLIA_VALORE_MEDIO)
			return true;
		else
			return false;
	}
	
	public String toString() {
		StringBuffer risultato = new StringBuffer();
		risultato.append(String.format(INTESTAZIONE, numeroSettimana, anno));
		
		for(int i = 0; i < misure.length; i++) {
			risultato.append(String.format(COMMENTO_VALORE, i + 1, misure[i]));
		}
		
		return risultato.toString();
	}
	
}
