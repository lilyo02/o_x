// 잘 모르겠는 부분 왜 안돌아가징..
package java1116;

//import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class ResourceClose1Demo {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		/*FileReader fileReader = null;

		try {
			fileReader = new FileReader("test.txt");
			Scanner sc = new Scanner(fileReader);
			
			while(sc.hasNextLine()) {
				System.out.println(sc.nextLine());
			}
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} finally {
			if (fileReader != null) {
				try {
					fileReader.close();
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
		}*/
		
		try (FileReader fileReader = new FileReader("test.txt"))
		{
			Scanner sc = new Scanner(fileReader);
			
			while(sc.hasNextLine()) {
				System.out.println(sc.nextLine());
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
}
