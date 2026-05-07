package it.unibs.fp.EsercitazioneInterfacce;

public class Rettangolo extends FiguraGeometrica{

	private static final String NOME_RETTANGOLO = "Rettangolo";
	private double base, altezza;
	
	public Rettangolo(double base, double altezza) {
		super(NOME_RETTANGOLO);
		this.base = base;
		this.altezza = altezza;
	}

	@Override
	public double calcolaArea() {
		return base * altezza;
	}

	@Override
	public double calcolaPerimetro() {
		return 2*(base + altezza);
	}

}
