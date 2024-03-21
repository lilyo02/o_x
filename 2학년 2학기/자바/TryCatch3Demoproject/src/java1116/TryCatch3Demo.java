package java1116;

public class TryCatch3Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = {0, 1, 2};
		try {
			int x = array[3];
		} catch (Exception e) {
			System.out.println("어이쿠!!!");
	//	} catch (ArrayIndexOutOfBoundsException e) {
	//		System.out.println("원소가 존재하지 않습니다.");
		}
		System.out.println("종료");
	}

}
