#include <iostream>
using namespace std;

double calcEarnings(double rate, double hours = 40);

int main()
{
	cout << "직원 1 임금 : " << calcEarnings(22.0) << endl;
	cout << "직원 2 임금 : " << calcEarnings(12.50, 18) << endl;

	return 0;
}

double calcEarnings(double rate, double hours)
{
	double pay;
	pay = hours * rate;

	return pay;
}