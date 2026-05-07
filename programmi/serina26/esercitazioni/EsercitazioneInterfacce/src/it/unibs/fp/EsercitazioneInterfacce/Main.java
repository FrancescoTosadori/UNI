package it.unibs.fp.EsercitazioneInterfacce;

import java.util.ArrayList;

import it.unibs.fp.EsercitazioneInterfacce.comparators.ComparatorArea;
import it.unibs.fp.EsercitazioneInterfacce.comparators.ComparatorPerimetro;

public class Main {

	private static final String COMPARIAMO_PER_AREA = "\n\nCompariamo per Area";
	private static final String COMPARIAMO_PER_PERIMETRO = "\n\nCompariamo per Perimetro";

	public static void main(String[] args) {
		ArrayList<FiguraGeometrica> figure = new ArrayList<FiguraGeometrica>();
		
		figure.add(new Rettangolo(2,3));
		figure.add(new Rettangolo(5,12));
		figure.add(new Cerchio(10));
		figure.add(new Cerchio(1));
		//Stampa la lista
		for(FiguraGeometrica figura : figure) {
			System.out.println(figura);
		}
		
		
		//ordina la lista (per area)
		System.out.println(COMPARIAMO_PER_AREA);
		ComparatorArea ca = new ComparatorArea();
		figure.sort(ca);
		//stampa la lista
		for(FiguraGeometrica figura : figure) {
			System.out.println(figura);
		}
		

		//ordina la lista (per perimetro)
		System.out.println(COMPARIAMO_PER_PERIMETRO);
		ComparatorPerimetro c2p = new ComparatorPerimetro();
		figure.sort(c2p);
		//stampa la lista
		for(FiguraGeometrica figura : figure) {
			System.out.println(figura);
		}
	}

}
