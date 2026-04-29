package it.unibs.fp.figuregeometriche;

public class Rectangle {
	private double base, height;
	
	public Rectangle(double base, double height) {
		this.base = base;
		this.height = height;
	}
	
	public double area() {
		return base * height;
	}

	public String toString() {
		return "Rectangle [base=" + base + ", height=" + height + ", area=" + area() + "]";
	}
	
}
