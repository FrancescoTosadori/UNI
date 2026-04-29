package it.unibs.fp.polverisottili;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class SettimanaPolveriTestJUNIT {

	@Test
	public void testSuperamentoMassimo() {
		int anno = 2026;
		int numeroSettimana = 15;
		int[] misure = {50,60,120,40,20,30,60};
		SettimanaPolveri s = new SettimanaPolveri(anno, numeroSettimana, misure);
		assertTrue(s.allarmeMassimo());
	}
	
	@Test
	public void testLetturaMassimo() {
		int anno = 2026;
		int numeroSettimana = 15;
		int[] misure = {50,60,120,40,20,30,60};
		SettimanaPolveri s = new SettimanaPolveri(anno, numeroSettimana, misure);
		assertEquals(s.valoreMassimo(), 120);
	}
	
	
}
