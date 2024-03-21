package java0921;

public class Switch4Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		whoIsIt("호랑이");
		whoIsIt("참새");
		whoIsIt("고등어");
		whoIsIt("곰팡이");
	}
	
	static void whoIsIt(String bio) {
		String kind = switch (bio) {
		//함수로 string 반환하게 하기 위해 변수를 앞에다 뒀음 그래서 딱히 kind = 를 안 붙여도 된다
		case "호랑이", "사자" -> "포유류";
		case "독수리", "참새" -> "조류";
		case "고등어", "연어" -> "어류";
		default -> {
			System.out.print("어이쿠! ");
			yield "...";
		 }
		};
		System.out.printf("%s는 %s이다.\n", bio, kind);
	}

}
