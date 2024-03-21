package sec04;

import java.util.Scanner;

public class ScannerDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		
		System.out.printf("Input Integer>");
		int x = in.nextInt();
		System.out.printf("\nInput Integer>");
		int y = in.nextInt();
		
		System.out.printf("%d * %d 은 %d입니다.\n", x, y, x * y);
	}

}
