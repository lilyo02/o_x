package java0921;

public class CircleDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle myCircle = new Circle();
		myCircle.setRadius(10.0);
		myCircle.show(myCircle.getRadius(), myCircle.findArea());
	}
}

/*class Circle {
	double radius;
	double findArea() {
		return 3.14 * radius * radius;
	}
	
	void show (double x, double y) {
		System.out.printf("������ = %.1f, ���� = %.1f\n", x, y);
	}
}*/

class Circle { // 5���� ����
	private double radius;
	public double getRadius() {
		return radius;
	}
	public void setRadius(double r) {
		this.radius = r;
	}
	double findArea() {
		return 3.14 * radius * radius;
	}
	void show (double x, double y) {
		System.out.printf("������ = %.1f, ���� = %.1f\n", x, y);
	}
}