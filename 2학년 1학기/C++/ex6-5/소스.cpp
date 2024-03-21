#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char ch;
	int count = 0;

	cout << "영문장을 입력하시오 \n";
	while (cin >> noskipws >> ch) //noskipws : 선행 공백 건너뛰기
	{
		if (isalpha(ch))
		{
			count++;
			// count += isalpha(ch);로 하면 다른 건가?
		}
		ch = toupper(ch);
		cout << ch;
	}

	cout << "알파벳 문자의 개수 = " << count << endl;

	return 0;
}