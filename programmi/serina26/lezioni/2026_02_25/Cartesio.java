public class Cartesio{
    public static void main(String args[]){
        Punto punto1 = new Punto();
        Punto punto2 = new Punto();

        punto1.setPunto(3,4);
        punto2.setPunto(1.415,7);

        System.out.println("Distanza tra i 2 punti: "+punto1.distanza(punto2));
    }
}
