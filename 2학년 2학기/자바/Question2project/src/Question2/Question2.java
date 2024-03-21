package Question2;

public class Question2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for (int i = 1; i <= 5; i++) {
			for(int j = 1; j <= i; j++) {
				System.out.printf("*");
			}
			System.out.println();
		}
		System.out.println();
		
		for (int k = 1; k <= 5; k++) {
			for (int f = 6; f > k; f--) {
				System.out.printf("*");
			}
			System.out.println();
		}
		System.out.println();
		
		for (int a = 0; a < 4; a++) {
			for (int b = a; b < 4; b++) {
				System.out.printf(" ");
			}
			for (int c = 0; c < a*2+1; c++) {
				System.out.printf("*");
			}
			System.out.println();
		}
		System.out.println();
	}

}
