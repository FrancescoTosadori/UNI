package it.unibs.fp.figuregeometriche;

public class Quadrato extends Rettangolo {
	
	public Quadrato(double lato) {
		super(lato, lato);
	}
	
	public double getLato() {
		return getBase();
	}
	
	@Override
	public String toString() {
		return String.format("QUADRATO (lato = %.3f)", getBase());
	}
	
	// TODO Ragionamento: perché qui non devo implementare "calcolaArea" e "calcolaPerimetro"? 
	// Perchè sono ereditati da Rettangolo?

}
