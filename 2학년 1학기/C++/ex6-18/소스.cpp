#include <iostream>
using namespace std;

double calcEarnings(double rate, double hours = 40);

int main()
{
	cout << "���� 1 �ӱ� : " << calcEarnings(22.0) << endl;
	cout << "���� 2 �ӱ� : " << calcEarnings(12.50, 18) << endl;

	return 0;
}

double calcEarnings(double rate, double hours)
{
	double pay;
	pay = hours * rate;

	return pay;
}