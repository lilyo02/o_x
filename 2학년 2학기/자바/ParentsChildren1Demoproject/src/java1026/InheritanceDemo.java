package java1026;

public class InheritanceDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle();
		Ball c2 = new Ball("������");
		
		System.out.println("�� : ");
		c1.findRadius();
		c1.findArea();
		
		System.out.println("\n�� : ");
		c2.findRadius();
		c2.findColor();
		// Ball�� findArea�� ��� Circle�� �ִ� findArea�� ���
		c2.findArea();	
		c2.findVolume();
	}
}
