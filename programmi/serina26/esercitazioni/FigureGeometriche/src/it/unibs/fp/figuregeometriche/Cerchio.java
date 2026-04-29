package it.unibs.fp.figuregeometriche;

public class Cerchio extends FiguraGeometrica {
	
	private double raggio;

	public Cerchio(double raggio) {
		this.raggio = raggio;
	}
	
	public double getRaggio() {
		return this.raggio;
	}
	
	@Override
	public String toString() {
		return "CERCHIO (raggio = " + raggio + ")";
	}

	@Override
	public double calcolaArea() {
		return this.raggio * this.raggio * Math.PI;
	}
	
	@Override
	public double calcolaPerimetro() {
		// TODO Completare con la formula per il calcolo della circonferenza
		return 2 * Math.PI * raggio;
	}
	
}
