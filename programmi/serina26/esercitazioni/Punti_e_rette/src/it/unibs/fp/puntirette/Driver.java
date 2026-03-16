package it.unibs.fp.puntirette;

import it.unibs.fp.mylib.BelleStringhe;

public class Driver {

	public static void main(String[] args) {
		Punto p1, p2;
		Retta r;
		
		//caso 1
		System.out.println(BelleStringhe.incornicia("Caso 1"));
		p1 = new Punto(1, 1);
		p2 = new Punto(0, 0);
		r = new Retta(p1,p2);

		stampaTest(p1, p2, r);
		
		//caso 2
		System.out.println(BelleStringhe.incornicia("Caso 2"));
		p1 = new Punto(2, 3);
		p2 = new Punto(5, 7);
		r = new Retta(p1, p2);

		stampaTest(p1, p2, r);

		
	}

	private static void stampaTest(Punto p1, Punto p2, Retta r) {
		System.out.println(r);
		System.out.println(p1.calcolaDistanza(p2));
	}

}
