package java0921;

public class Switch4Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		whoIsIt("ȣ����");
		whoIsIt("����");
		whoIsIt("����");
		whoIsIt("������");
	}
	
	static void whoIsIt(String bio) {
		String kind = switch (bio) {
		//�Լ��� string ��ȯ�ϰ� �ϱ� ���� ������ �տ��� ���� �׷��� ���� kind = �� �� �ٿ��� �ȴ�
		case "ȣ����", "����" -> "������";
		case "������", "����" -> "����";
		case "����", "����" -> "���";
		default -> {
			System.out.print("������! ");
			yield "...";
		 }
		};
		System.out.printf("%s�� %s�̴�.\n", bio, kind);
	}

}
