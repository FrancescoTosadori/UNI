package it.unibs.fp.figuregeometriche;

import java.util.ArrayList;

import it.unibs.fp.mylib.InputDati;
import it.unibs.fp.mylib.MyMenu;

public class Main {

	private static final double LUNGHEZZA_MINIMA = 0;
	private static final String PROMPT_RETTANGOLO_BASE = "Inserisci le dimensioni della base del RETTANGOLO:";
	private static final String PROMPT_RETTANGOLO_ALTEZZA = "Inserisci le dimensioni dell'altezza del RETTANGOLO:";
	private static final String PROMPT_QUADRATO = "Inserisci le dimensioni del QUADRATO:";
	private static final String PROMPT_CERCHIO = "Inserisci le dimensioni del CERCHIO:";
	
	private static final String STAMPA_ELEMENTO_LISTA = " - %s\n";
	private static final String STAMPA_AREA = "   > area = %.3f\n";
	private static final String STAMPA_PERIMETRO = "   > perimetro = %.3f\n";
	private static final String CONFERMA_AGGIUNTA_FIGURA = "Nuova figura aggiunta correttamente: %s\n";
	
	private static final String MENU_TITOLO = "Seleziona un'opzione:";
	private static final String [] MENU_OPZIONI = {
			"Visualizza la lista di figure",
			"Aggiungi un rettangolo",
			"Aggiungi un quadrato",
			"Aggiungi un cerchio",
	};

	private static ArrayList<FiguraGeometrica> listaFigure = new ArrayList<>();
	private static int lunghezzaLista = 0;
	
	public static void main(String[] args) {
		MyMenu menu = new MyMenu(MENU_TITOLO, MENU_OPZIONI);
		int scelta = 0;
		
		do {
			scelta = menu.scegli();
			
			switch (scelta) {
			case 1:
				// Visualizzazione di tutta la lista di figure
				stampaListaFigure();
				break;
				
			case 2:
				// Aggiunta di un rettangolo
				creaRettangolo();
				break;
				
			case 3:
				// Aggiunta di un quadrato
				creaQuadrato();
				break;
				
			case 4:
				// Aggiunta di un cerchio
				creaCerchio();
				break;
				
			case 0:
			default:
				break;
			}
		} while (scelta != 0);
		
	}

	private static void creaQuadrato() {
		/*
		 * TODO
		 * Completare con il codice che:
		 * 1. Crea un nuovo oggetto QUADRATO, sulla base dei dati forniti dall'utente
		 * 2. Aggiunge la nuova figura alla lista
		 * 3. Conferma la creazione della figura, stampandola a schermo
		 */
		listaFigure.add(new Quadrato(InputDati.leggiDoubleConMinimo(PROMPT_QUADRATO, LUNGHEZZA_MINIMA)));
		System.out.println(String.format(CONFERMA_AGGIUNTA_FIGURA, listaFigure.get(lunghezzaLista).toString()));
		lunghezzaLista++;
	}

	private static void creaRettangolo() {
		/*
		 * TODO
		 * Completare con il codice che:
		 * 1. Crea un nuovo oggetto RETTANGOLO, sulla base dei dati forniti dall'utente
		 * 2. Aggiunge la nuova figura alla lista
		 * 3. Conferma la creazione della figura, stampandola a schermo
		 */
		
		listaFigure.add(new Rettangolo(InputDati.leggiDoubleConMinimo(PROMPT_RETTANGOLO_BASE, LUNGHEZZA_MINIMA),
									   InputDati.leggiDoubleConMinimo(PROMPT_RETTANGOLO_ALTEZZA, LUNGHEZZA_MINIMA)));
		System.out.println(String.format(CONFERMA_AGGIUNTA_FIGURA, listaFigure.get(lunghezzaLista).toString()));
		lunghezzaLista++;
	}
	
	private static void creaCerchio() {
		/*
		 * TODO
		 * Completare con il codice che:
		 * 1. Crea un nuovo oggetto CERCHIO, sulla base dei dati forniti dall'utente
		 * 2. Aggiunge la nuova figura alla lista
		 * 3. Conferma la creazione della figura, stampandola a schermo
		 */
		listaFigure.add(new Cerchio(InputDati.leggiDoubleConMinimo(PROMPT_CERCHIO, LUNGHEZZA_MINIMA)));
		System.out.println(String.format(CONFERMA_AGGIUNTA_FIGURA, listaFigure.get(lunghezzaLista).toString()));
		lunghezzaLista++;
	}

	private static void stampaListaFigure() {
		for (FiguraGeometrica figura : listaFigure) {
			System.out.printf(STAMPA_ELEMENTO_LISTA, figura.toString());
			System.out.printf(STAMPA_AREA, figura.calcolaArea());
			// TODO Aggiungere la stampa del perimetro per ciascuna figura
			System.out.printf(STAMPA_PERIMETRO, figura.calcolaPerimetro());
		}
	}

}
