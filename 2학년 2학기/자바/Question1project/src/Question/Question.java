package Question;

import java.util.Scanner;

public class Question {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		
		if (x >= 19)
			System.out.printf("성년");
		else
			System.out.printf("미성년");
	}

}
