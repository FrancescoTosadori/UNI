package it.unibs.fp.figuregeometriche;

public class Square extends Rectangle{

	private double side;
	
	public Square(double side) {
		super(side, side);
		this.side = side;
	}

	@Override
	public String toString() {
		return "Square [side=" + side + ", area=" + area() +"]";
	}
	
	public double getSide() {
		return side;
	}
	
}
