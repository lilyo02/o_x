package java1012;

public class EnumDemo {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Gender gender = Gender.FEMALE;
		if (gender == Gender.MALE)
			// ���� gender ���� �Ȱ�
			System.out.println(Gender.MALE + "�� ���� �ǹ��� �ִ�.");
		else
			System.out.println(Gender.FEMALE + "�� ���� �ǹ��� ����.");
		
		for (Gender g : Gender.values())
			System.out.println(g.name());
		
		System.out.println(Gender.valueOf("MALE"));
	}
}

enum Gender {
	MALE("����"), FEMALE("����");
	
	private String s;
	
	Gender(String s) {
		this.s = s;
	}
	
	public String toString() {
		return s;
	}
}