package it.unibs.fp.renderer;

public class Point {
	private double x, y, z;
	
	public Point(double x, double y, double z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}
	
	public Point(Point P) {
		this.x = P.getX();
		this.y = P.getY();
		this.z = P.getZ();
	}
	
	public double getX() {
		return x;
	}



	public void setX(double x) {
		this.x = x;
	}



	public double getY() {
		return y;
	}



	public void setY(double y) {
		this.y = y;
	}



	public double getZ() {
		return z;
	}



	public void setZ(double z) {
		this.z = z;
	}

	
	public void add_vector(Vector v) {
		x += v.getX();
		y += v.getY();
		z += v.getZ();
	}
}
