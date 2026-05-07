package it.unibs.fp.EsercitazioneInterfacce.comparators;

import java.util.Comparator;

import it.unibs.fp.EsercitazioneInterfacce.FiguraGeometrica;

public class ComparatorPerimetro implements Comparator{

	@Override
	public int compare(Object o1, Object o2) {
		FiguraGeometrica f1 = (FiguraGeometrica) o1;
		FiguraGeometrica f2 = (FiguraGeometrica) o2;
		
		return (int)(f1.calcolaPerimetro()-f2.calcolaPerimetro());
	}
	
}
