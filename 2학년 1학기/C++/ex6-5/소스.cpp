#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	int count = 0;

	cout << "�������� �Է��Ͻÿ� \n";
	while (cin >> noskipws >> ch) //noskipws : ���� ���� �ǳʶٱ�
	{
		if (isalpha(ch))
		{
			count++;
			// count += isalpha(ch);�� �ϸ� �ٸ� �ǰ�?
		}
		ch = toupper(ch);
		cout << ch;
	}

	cout << "���ĺ� ������ ���� = " << count << endl;

	return 0;
}