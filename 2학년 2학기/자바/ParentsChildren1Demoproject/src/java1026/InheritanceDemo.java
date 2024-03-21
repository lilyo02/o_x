package java1026;

public class InheritanceDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c1 = new Circle();
		Ball c2 = new Ball("빨간색");
		
		System.out.println("원 : ");
		c1.findRadius();
		c1.findArea();
		
		System.out.println("\n공 : ");
		c2.findRadius();
		c2.findColor();
		// Ball에 findArea가 없어서 Circle에 있는 findArea를 사용
		c2.findArea();	
		c2.findVolume();
	}
}
