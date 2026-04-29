package it.unibs.fp.tama;
import it.unibs.fp.mylib.*;

public class TamaMain {
	
	private final static String SALUTO = "Benvenuti nel mondo dei Tamagotchi";
	
	private final static String RICHIESTA_NOME = "Inserisci il nome del tuo Tamagotchi:";
	private final static String RICHIESTA_SAZIETA = "Inserisci il valore iniziale della sazietà del tuo Tamagotchi:";
	private final static String RICHIESTA_AFFETTO = "Inserisci il valore iniziale della soddisfazione affettiva del tuo Tamagotchi:";	
	
	private final static String SCELTA_AZIONE = "Inserire F per finire, B per dare biscotti, C per dare carezze:";
	private final static String RICHIESTA_BISCOTTI = "Inserire il numero di biscotti da dare al Tamagotchi:";
	private final static String RICHIESTA_CAREZZE = "Inserire il numero di carezze da dare al Tamagotchi:";
	
	private final static String SCELTA_ERRATA = "Attenzione: inserimento errato";
	
	public static void main (String [] args)
	{
		System.out.println(SALUTO);
		Tamagotchi creatura = creaTamagotchi(); 
		boolean finito = false;
		do
		{
			char scelta = InputDati.leggiChar(SCELTA_AZIONE);
			switch (scelta)
			{
			 case 'F':
			 case 'f': 
				 finito = true;
			 
			 case 'B':
			 case 'b': 
				 int numBiscotti = InputDati.leggiInteroPositivo(RICHIESTA_BISCOTTI); // PER ORA NON SI ESTRAE CASUALMENTE PER AVERE CONTROLLO DIRETTO SULL'EVOLUZIONE
				 creatura.riceviBiscotti(numBiscotti);
			 break;
			 
			 case 'C':
			 case 'c': 
				 int numCarezze = InputDati.leggiInteroPositivo(RICHIESTA_CAREZZE); // PER ORA NON SI ESTRAE CASUALMENTE PER AVERE CONTROLLO DIRETTO SULL'EVOLUZIONE
				 creatura.riceviCarezze(numCarezze);
			 break;
			 
			 default:
				 System.out.println(SCELTA_ERRATA); 
				 
			}
			
		if (! finito)
		 {
		  System.out.println(creatura.toString());
		  if (creatura.sonoMorto())
		   finito=true;
		 }
		
		} while(finito);
			
			
	}
	
	public static Tamagotchi creaTamagotchi()
	{
		String nome = InputDati.leggiStringaNonVuota(RICHIESTA_NOME);
		int affetto = InputDati.leggiIntero(RICHIESTA_AFFETTO,0,Tamagotchi.MAX_AFFETTO);
		int sazieta = InputDati.leggiIntero(RICHIESTA_SAZIETA,0,Tamagotchi.MAX_SAZIETA);
		return new Tamagotchi (nome,affetto,sazieta);
	}

}
