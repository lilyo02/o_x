package java1026;

public class Ball extends Circle {
	private String color;
	
	public Ball(String color) {
		this.color = color;
	}
	
	public void findColor() {
		System.out.println(color + " ���̴�.");
	}
	
	public void findArea() {
		//super.findArea();
		//super�� �θ� Ŭ���� ��Ī? -> �����̴� ��Ȳ���� ��밡��
		// �θ� Ŭ�������� ��ӹ��� �޼��带 ������ �ڵ�
		System.out.println("���̴� 4*(PI*������*������)�̴�");
	}
	
	public void findVolume() {
		System.out.println("���Ǵ� 4/3*(PI*������*������*������)�̴�.");
	}
}
