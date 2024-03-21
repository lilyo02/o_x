#include <iostream>
#include <string> // string 클래스를 사용하기 위함
using namespace std;

int main()
{
	string first;
	string initial;
	string last;
	string space = " ";
	string dot = ".";
	string fullName;
	
	cout << "이름(first name) 입력하기 : ";
	cin >> first;
	cout << "이니셜(initial) 입력하기 : ";
	cin >> initial;
	cout << "성(last name) 입력하기 : ";
	cin >> last;

	// 결합 연산자를 사용해서 문자열 연결
	fullName = first + space + initial + dot + space + last;

	cout << "전체 이름(full name) : " << fullName;
	return 0;
}