package it.unibs.fp.medagliere;

public class Gara {
	private String nomeGara;
	private Nazione [] podio = new Nazione[3];

	public Gara(String nomeGara) {
		this.nomeGara = nomeGara;
	}
	
	public void podio(Nazione nat1, Nazione nat2, Nazione nat3) {
		podio[0] = nat1;
		podio[1] = nat2;
		podio[2] = nat3;
	}
	
	public Nazione oro() {
		return podio[0];
	}
	
	public Nazione argento() {
		return podio[1];
	}
	
	public Nazione bronzo() {
		return podio[2];
	}
	
}
