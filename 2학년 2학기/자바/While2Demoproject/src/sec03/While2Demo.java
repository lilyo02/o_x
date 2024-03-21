package sec03;

public class While2Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int row = 2;
		while (row < 10) {
			int column = 1;
			while (column < 10) {
				System.out.printf("%4d", row * column);
				column++;
			}
			System.out.println();
			row++;
		} // end while
		
	}
}
