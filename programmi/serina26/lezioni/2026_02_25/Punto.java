public class Punto{
    private double x = 0;
    private double y = 0;

    public void printPunto(){
        System.out.println("("+x+";"+y+")");
    }

    public void setPunto(double newX, double newY){
        x = newX;
        y = newY;
    }

    public double getX(){
        return x;
    }

    public double getY(){
        return y;
    }

    public double distanza(Punto altro){
        return Math.sqrt( (x - altro.getX())*(x - altro.getX()) + (y - altro.getY())*(y - altro.getY()) );
    }
}
