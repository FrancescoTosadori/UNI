package it.unibs.fp.figuregeometriche;

public class Rettangolo extends FiguraGeometrica {
	
	private double base;
	private double altezza;

	public Rettangolo(double base, double altezza) {
		this.base = base;
		this.altezza = altezza;
	}

	public double getBase() {
		return this.base;
	}

	public double getAltezza() {
		return altezza;
	}
	
	public String toString() {
		return String.format("RETTANGOLO (base = %.3f, altezza = %.3f)", this.base, this.altezza);
	}
	
	@Override
	public double calcolaArea() {
		// TODO Completare con la formula per il calcolo dell'area
		return base * altezza;
	}
	
	@Override
	public double calcolaPerimetro() {
		// TODO Completare con la formula per il calcolo del perimetro
		return (base + altezza) * 2;
	}
}
