package it.unibs.fp.EsercitazioneInterfacce;

public abstract class FiguraGeometrica implements Misurabile{
	private String nome;
	
	public FiguraGeometrica(String nome) {
		this.nome = nome;
	}
	
	@Override
	public String toString() {
		StringBuilder sb = new StringBuilder();
		sb
		.append("Figura " + nome)
		.append("\n\tPerimetro: " + calcolaPerimetro())
		.append("\n\tArea: " + calcolaArea());
		
		return sb.toString();
	}
	
}
