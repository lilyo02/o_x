package java1116;

public class TryCatch1Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] array = {0, 1, 2};
		try {
			System.out.println("������ ���� => " + array[3]);
			// �ε��� ����
			System.out.println("ù ��° ���� => " + array[0]);
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("���Ұ� �������� �ʽ��ϴ�.");
		}
		System.out.println("������!!!");
	}

}
