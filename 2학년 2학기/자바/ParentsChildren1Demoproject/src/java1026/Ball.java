package java1026;

public class Ball extends Circle {
	private String color;
	
	public Ball(String color) {
		this.color = color;
	}
	
	public void findColor() {
		System.out.println(color + " 공이다.");
	}
	
	public void findArea() {
		//super.findArea();
		//super이 부모 클래스 지칭? -> 덧붙이는 상황에서 사용가능
		// 부모 클래스에서 상속받은 메서드를 수정한 코드
		System.out.println("넓이는 4*(PI*반지름*반지름)이다");
	}
	
	public void findVolume() {
		System.out.println("부피는 4/3*(PI*반지름*반지름*반지름)이다.");
	}
}
