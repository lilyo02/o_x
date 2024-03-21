package Question3;

public class Question3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for (int a = 1; a <= 19; a++)
			for (int b = 1; b <= 19; b++)
				for (int c = 1; c <= 19; c++)
			if ((a*a+b*b==c*c) && (a+b+c<=20)) {
				System.out.printf("%d %d %d\n",a,b,c);
			}
		
		
	}

}
