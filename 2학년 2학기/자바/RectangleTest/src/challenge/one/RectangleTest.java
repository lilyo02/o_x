package challenge.one;
import java.util.Scanner;

public class RectangleTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double w, h, area;
		Scanner in = new Scanner(System.in);
		
		System.out.print("Input Width : ");
		w = in.nextDouble();
		System.out.print("Input Height : ");
		h = in.nextDouble();
		
		area = w * h;
		System.out.println("Area is " + area + ".");
	}

}
