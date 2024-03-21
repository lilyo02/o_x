package java1012;

public class MainArgumentDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		if (args.length == 2) {
			int i = Integer.parseInt(args[1]);
			nPrintln(args[0], i);
		} else 
			System.out.println("어이쿠!");
	}

	public static void nPrintln(String s, int n) {
		for (int i = 0; i < n; i ++)
			System.out.println(s);
	}
}
// Run 옆 화살표 눌러서 Argument창에 인수 입력하면 나오는 것