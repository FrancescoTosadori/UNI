package it.unibs.fp.polverisottili;

import it.unibs.fp.mylib.InputDati;

public class PolveriMain {

	private static final String SCELTA_AZIONE = "inserire n per uscire dal ciclo";
	private static final String ALLARME_MEDIO = "\nAllarme medio";
	private static final String ALLARME_MASSIMO = "PORCA MERDA IL VALORE È %d E IL MASSIMO È %d";
	private static final String INTRO_SETTIMANA = "Ecco i dati della settimana richiesta";
	private static final String ARRIVEDERCI = "arrivederci strunz";
	private static final String SALUTO = "ciao stronzo";
	private static final String RICHIESTA_MISURA = "\nMisura?";
	private static final int MAX_SETTIMANA = 53;
	private static final int MIN_SETTIMANA = 1;
	private static final int GIORNI_SETTIMANA = 7;
	private static final int ANNO_MINIMO = 1950;
	private static final String RICHIESTA_ANNO = "\nAnno?";

	public static void main(String[] args) {
		System.out.println(SALUTO);
		char scelta = 's';
		
		do {
			SettimanaPolveri datiRaccolti = creaSettimana();
			System.out.println(INTRO_SETTIMANA);
			System.out.println(datiRaccolti.toString());
			
			if(datiRaccolti.allarmeMassimo()) {
				System.out.printf(ALLARME_MASSIMO, datiRaccolti.valoreMassimo(), SettimanaPolveri.SOGLIA_VALORE_MASSIMO);
			}
			
			if(datiRaccolti.allarmeMedio()) {
				System.out.println(ALLARME_MEDIO);
			}
			
			scelta = InputDati.leggiChar(SCELTA_AZIONE);
		}while(scelta != 'n' && scelta != 'N');
		
		System.out.println(ARRIVEDERCI);
	}
	
	public static SettimanaPolveri creaSettimana() {
		int anno = InputDati.leggiInteroConMinimo(RICHIESTA_ANNO, ANNO_MINIMO);
		int numeroSettimana = InputDati.leggiIntero("\nSettimana?", MIN_SETTIMANA, MAX_SETTIMANA);
		int [] misure = new int[GIORNI_SETTIMANA];
		
		for(int i = 0; i < misure.length; i++) {
			misure[i] = InputDati.leggiInteroConMinimo(RICHIESTA_MISURA + (i+1) + ": ", 0);
		}
		
		return new SettimanaPolveri(anno, numeroSettimana, misure);
	}

}
