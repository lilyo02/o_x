package java1026;

class Animal {
	public Animal(String s) {
		System.out.println("���� : " + s);
	}
}

class Mammal extends Animal {
	public Mammal() {
		//super();
		super("������");
		System.out.println("������ : ������");
	}
	
	public Mammal(String s) {
		super(s);
		System.out.println("������ : " + s);
	}
}

public class AnimalDemo {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Mammal ape = new Mammal();
		Mammal lion = new Mammal("����");
	}

}
