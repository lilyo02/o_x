package java1026;

class Person {
	String name = "Human";
	void whoami() {
		System.out.println("I am Human");
	}
}

class Student extends Person {
	int number = 7;
	void work() {
		System.out.println("I am Studying");
	}
}

public class InstanceofDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student s = new Student();
		Person p = new Person();
		System.out.println(s instanceof Person);
		System.out.println(s instanceof Student);
		System.out.println(p instanceof Student);
		//Systme.out.println(s instanceof String);
		downcast(s);
	}
	
	static void downcast(Person p) {
		if (p instanceof Student) {
			Student s = (Student) p;
			System.out.println("ok, Downcast Conversion");
		}
	}

}
