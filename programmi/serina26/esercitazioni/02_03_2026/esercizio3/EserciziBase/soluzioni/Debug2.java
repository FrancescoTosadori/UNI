
public class Debug2 
{

	public static void main(String args[])
	{
		System.out.println("Stampa dei primi dieci numeri:");
		
		int a=7;
		int b=2;
		
		int risultatoSomma= somma(a, b);
		//7+2=9
		
		int risultatoProdotto = prodotto(a ,b);
		//7*2=14
		
		int risultatoDifferenza = differenza(a, b);
		//7-2=5
		
		double risultatoDivisione = divisione(a, b); 
		// 7/2=3,5
		
		double risultato=risultatoSomma+risultatoProdotto+risultatoDifferenza+risultatoDivisione;
		// 9+14+5+3,5=31,5
		
		System.out.println("Risultato:"+risultato);
	}
	
	public static int somma(int a, int b)
	{
		int valore=a+b;
		return valore;
	}
	
	public static int differenza(int b, int a)
	{
		int valore=a-b;
		return valore;
	}
	
	public static int prodotto(int a, int b)
	{
		int valore=a*b;
		return valore;
	}
	
	public static int divisione(int a, int b)
	{
		int valore=a/b;
		return valore;
	}
}
