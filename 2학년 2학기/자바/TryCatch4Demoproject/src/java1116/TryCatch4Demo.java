package java1116;

public class TryCatch4Demo {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Reso reso = new Reso();
		try (reso) {
			reso.show();
		} catch (Exception e) {
			System.out.println("���� ó��");
		}
	}
}

class Reso implements AutoCloseable {
	void show() {
		System.out.println("�ڿ� ���");
	}
	public void close() throws Exception {
		System.out.println("�ڿ� �ݱ�");
	}
}