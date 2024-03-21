package java1012;

public class IncrementDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] x = {0};
		System.out.println("호출 전의 x[0] = " + x[0]);
		
		increment(x);
		System.out.println("호출 후의 x[0] = " + x[0]);
	}
	
	public static void increment(int[] n) {
		System.out.print("increment() 메서드 안에서 ");
		System.out.print("n[0] = " + n[0] + " ---> ");
		n[0]++;
		System.out.println("n[0] = " + n[0]);
	}

}
