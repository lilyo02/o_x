#include <iostream>
using namespace std;
int getData();
int main()
{
	int number = getData(); // 매개변수없이 함수 호출
	cout << "가장 오른쪽의 숫자 = " << number % 10;
	
	return 0;
}

int getData()
{
	int data;
	do
	{
		cout << "양의 정수 입력 : ";
		cin >> data;
	} while (data <= 0);

	return data;
}