package it.unibs.fp.figuregeometriche;

public class Main {

	public static void main(String[] args) {
		Rectangle rect = new Rectangle(3, 7);
		Square sq = new Square(7);
		
		System.out.println(rect.toString());
		System.out.println(sq.toString());
		
		//Polimorfismo: anche se l'oggetto figura è un rettangolo, viene dichiarato come quadrato e trattato come tale.
		Rectangle figura = new Square(2);
		
		System.out.println(figura.toString());
		
	}

}
