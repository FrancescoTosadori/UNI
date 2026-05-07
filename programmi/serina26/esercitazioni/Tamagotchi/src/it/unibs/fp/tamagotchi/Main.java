package it.unibs.fp.tamagotchi;

import it.unibs.fp.mylib.InputDati;
import it.unibs.fp.mylib.MyMenu;

public class Main {

	private static final int MIN_BISCOTTI = 0;
	private static final int MIN_CAREZZE = 0;
	private static final String INSERIRE_CAREZZE = "\nInserire # carezze";
	private static final String INSERIRE_BISCOTTI = "\nInserire # biscotti >";
	private static final String RICHIESTA_NOME = "\nCome vuoi chiamare il tuo Tamagotchi? >";
	private static final String MENU_PRINCIPALE = "MENU PRINCIPALE";
	private static final String [] OPZIONI = {"Crea nuovo Tamagotchi (rimuove il precedente)", "Dai biscotti", "Dai carezze"};
	private static boolean cicla = true;
	
	public static void main(String[] args) {
		MyMenu menu = new MyMenu(MENU_PRINCIPALE, OPZIONI);
		
		Tamagotchi tamascemo = new Tamagotchi(InputDati.leggiStringa(RICHIESTA_NOME));
		
		System.out.println();
		while(cicla) {
			System.out.println(tamascemo.toString());
			
			switch(menu.scegli()) {
			case 0:
				cicla = false;
				break;
			case 1: 
				tamascemo = new Tamagotchi(InputDati.leggiStringa(RICHIESTA_NOME));
				break;
			case 2: 
				tamascemo.riceviBiscotti(InputDati.leggiInteroConMinimo(INSERIRE_BISCOTTI, MIN_BISCOTTI));
				break;
			case 3:
				tamascemo.riceviCarezze(InputDati.leggiInteroConMinimo(INSERIRE_CAREZZE, MIN_CAREZZE));
				break;
			}
			
		}

	}
	
}
