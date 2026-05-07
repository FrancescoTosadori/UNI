package it.unibs.fp.tamagotchi;

import it.unibs.fp.mylib.NumeriCasuali;

public class Tamagotchi {
	private static final int MAX_VALORI_INIZIALI = 60;
	private static final int MIN_VALORI_INIZIALI = 40;
	private static final int MAX_FELICITA_SAZIETA = 90;
	private static final int MIN_FELICITA_SAZIETA = 30;
	private static final int MIN_FELICITA_SODD_AFF = 30;
	private static final int MAX_SODD_AFF = 100;
	private static final int MIN_SAZIETA = 0;
	private static final double PERCENT_RIDUZIONE_SAZIETA = 0.1;
	private static final int MAX_SAZIETA = 100;
	private static final int MIN_SODD_AFF = 0;
	private int soddisfazione_affettiva;
	private int sazietà;
	private String nome;
	
	public Tamagotchi(String nome) {
		this.nome = nome;
		this.soddisfazione_affettiva = NumeriCasuali.estraiIntero(MIN_VALORI_INIZIALI, MAX_VALORI_INIZIALI);
		this.sazietà = NumeriCasuali.estraiIntero(MIN_VALORI_INIZIALI, MAX_VALORI_INIZIALI);
	}
	
	//possibilità di impostare valori iniziali
	public Tamagotchi(String nome, int soddisfazione_affettiva, int sazietà) {
		this.nome = nome;
		this.soddisfazione_affettiva = soddisfazione_affettiva;
		this.sazietà = sazietà;
	}
	
	/**
	 * Sazietà aumenta del 10% rispetto alla precedente per ogni biscotto ricevuto; soddisf.aff. diminuisce di biscotti/4
	 * @param biscotti
	 */
	public void riceviBiscotti(int biscotti) {
		soddisfazione_affettiva = Math.max(soddisfazione_affettiva -= biscotti/4,
										   MIN_SODD_AFF);
		sazietà = Math.min((int)(sazietà - biscotti * PERCENT_RIDUZIONE_SAZIETA * sazietà),
				           MAX_SAZIETA);
	}
	
	/**
	 * Sazietà aumenta di carezze; soddisf.aff. diminuisce di carezze/2
	 * @param carezze
	 */
	public void riceviCarezze(int carezze) {
		sazietà = Math.max(sazietà -= carezze/4,
						   MIN_SAZIETA);
		soddisfazione_affettiva = Math.min(soddisfazione_affettiva += carezze,
				                           MAX_SODD_AFF);
	}
	
	/**
	 * se sodd_aff >= 30 e 30 <= sazietà <= 90 il tamagotchi è felice
	 * @return
	 */
	public boolean sonoTriste() {
		if(soddisfazione_affettiva >= MIN_FELICITA_SODD_AFF && sazietà >= MIN_FELICITA_SAZIETA && sazietà <= MAX_FELICITA_SAZIETA)
			return false;
		else
			return true;
	}
	
	/**
	 * se uno dei due valori è 0 o se la sazietà è massima
	 * @return è vivo o morto
	 */
	public boolean sonoMorto() {
		if(sazietà != MIN_SAZIETA && sazietà != MAX_SAZIETA && soddisfazione_affettiva != MIN_SODD_AFF)
			return false;
		else 
			return true;
	}
	
	public String toString(){
		String output;
		StringBuffer tamagotchi = new StringBuffer();
		
		tamagotchi.append("\nMi chiamo "+ nome + " e sono ");
		if(sonoMorto())
			tamagotchi.append("morto x_x");
		else {
			if(sonoTriste())
				tamagotchi.append("triste :(");
			else
				tamagotchi.append("felice :)");
		}
			
		
		tamagotchi.append("\nSazietà = " + sazietà + "\nSoddisfazione affettiva = " + soddisfazione_affettiva);
		
		output = tamagotchi.toString();
		return output;
	}
	
}
