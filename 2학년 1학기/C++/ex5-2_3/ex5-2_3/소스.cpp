#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score, sum, counter, subject;
	sum = counter = 0;
	double average;

	cout << "������ ������ �Է� : ";
	cin >> subject;

	while (counter < subject)
	{
		cout << "���� �Է� (0~100�� ����) : ";
		cin >> score;

		// �Է� ������ ������ ����� ���� �����ϱ� ���� ���ǹ�
		if (score < 0 || score > 100)
		{
			cout << "���� ";
			// �ٽ� �ݺ����� �������� �ǵ��ư����ϹǷ� continue ���
			continue;
		}

		sum += score;
		counter++;
	}

	average = double(sum) / subject;
	cout << "��� ���� : " << average << "\n";

	// ������ ����
	average = static_cast <double>(sum) / subject;
	cout << fixed << setprecision(2) << showpoint;
	cout << "��� ���� : " << average << "\n";

	return 0;
}