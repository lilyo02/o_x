package java1012;

public class EnumDemo {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Gender gender = Gender.FEMALE;
		if (gender == Gender.MALE)
			// 여기 gender 이해 안감
			System.out.println(Gender.MALE + "은 병역 의무가 있다.");
		else
			System.out.println(Gender.FEMALE + "은 병력 의무가 없다.");
		
		for (Gender g : Gender.values())
			System.out.println(g.name());
		
		System.out.println(Gender.valueOf("MALE"));
	}
}

enum Gender {
	MALE("남성"), FEMALE("여성");
	
	private String s;
	
	Gender(String s) {
		this.s = s;
	}
	
	public String toString() {
		return s;
	}
}