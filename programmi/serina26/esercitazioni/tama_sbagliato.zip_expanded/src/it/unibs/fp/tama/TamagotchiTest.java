package it.unibs.fp.tama;

import static org.junit.Assert.*;

import org.junit.Test;

public class TamagotchiTest {
	
	public static final double EPSILON = 0.001;

	@Test
	public void testDiedGorged() {
		final Tamagotchi tama = new Tamagotchi("Kira");
		tama.setSazietàEAffetività(100, 50);
		assertTrue("Tama sazietà 100 -> morto ingozzato", tama.sonoMorto());
	}
	
	@Test
	public void testSatietyIncreased() {
		final Tamagotchi tama = new Tamagotchi("Kira", 50, 50);
		final double expectedSatiety = Math.min(tama.getGradoSazietà() * Tamagotchi.INCREMENTO_BISCOTTO, Tamagotchi.MAX_SAZIETA);
		final double expectedAffectivity = Math.max(0, tama.getGradoAffettivo() - 1/Tamagotchi.FATTORE_BISCOTTI);
		tama.riceviBiscotti(1);
		assertEquals(expectedSatiety, tama.getGradoSazietà(), EPSILON);
		assertEquals(expectedAffectivity, tama.getGradoAffettivo(), EPSILON);
	}
	
	@Test
	public void testAffectivityIncreased() {
		final Tamagotchi tama = new Tamagotchi("Kira", 50, 50);
		final int NUMERO_CAREZZE = 1;
		final double expectedAffectivity = Math.min(tama.getGradoAffettivo() + NUMERO_CAREZZE, Tamagotchi.MAX_AFFETTO);
		final double expectedSatiety = Math.max(0, tama.getGradoSazietà() - NUMERO_CAREZZE/Tamagotchi.FATTORE_CAREZZE);
		tama.riceviCarezze(1);
		assertEquals(expectedSatiety, tama.getGradoSazietà(), EPSILON);
		assertEquals(expectedAffectivity, tama.getGradoAffettivo(), EPSILON);
	}
	
	@Test
	public void testSatietyExceeded() {
		final Tamagotchi tama = new Tamagotchi("Kira", 50, 99);
		tama.riceviBiscotti(1);
		assertTrue(tama.sonoMorto());
	}
	
	@Test
	public void testDiedForHunger() {
		final Tamagotchi tama = new Tamagotchi("Kira", 50, 1);
		tama.riceviCarezze(2);
		assertTrue(tama.sonoMorto());
	}
	
	@Test(expected=IllegalArgumentException.class)
	public void testInitWithNegativeArgument()
	{
		new Tamagotchi("Kira", 50, -1);
	}
	
	@Test
	public void testSetNegativeSatietyAndAffectivity() {
		final Tamagotchi tama = new Tamagotchi("Kira");
		tama.setSazietàEAffetività(50, -50);
		assertEquals(tama.getGradoAffettivo(), 0, EPSILON);
		assertTrue(tama.sonoMorto());
	}
	
	@Test
	public void testSetSatietyAndNegativeAffectivity() {
		final Tamagotchi tama = new Tamagotchi("Kira");
		tama.setSazietàEAffetività(-50, 50);
		assertEquals(tama.getGradoSazietà(), 0, EPSILON);
		assertTrue(tama.sonoMorto());
	}
	
	@Test
	public void testIsSad() {
		final Tamagotchi tama = new Tamagotchi("Kira");
		tama.setSazietàEAffetività(2, 29);
		assertTrue(tama.sonoTriste());
	}
	
	@Test
	public void testIsSadTooFood() {
		final Tamagotchi tama = new Tamagotchi("Kira");
		tama.setSazietàEAffetività(91, 50);
		assertTrue(tama.sonoTriste());
	}
}
