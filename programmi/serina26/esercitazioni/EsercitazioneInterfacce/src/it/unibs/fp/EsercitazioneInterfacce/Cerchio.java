package it.unibs.fp.EsercitazioneInterfacce;

public class Cerchio extends FiguraGeometrica{
	private static final String NOME_CERCHIO = "Cerchio";
	private double raggio;
	
	//questo costruttore non ci piace- perciò passerà al costruttore della superclasse la parola "CERCHIO"
	public Cerchio(double raggio) {
		super(NOME_CERCHIO); //la prima istruzione dev'essere sempre il super. Super va letto come CostruttoreSuperclasse(argomenti)
		this.raggio = raggio;
	}

	@Override
	public double calcolaArea() {
		return Math.PI * raggio * raggio;
	}

	@Override
	public double calcolaPerimetro() {
		// TODO Auto-generated method stub
		return 2 * Math.PI * raggio;
	}
	
}
