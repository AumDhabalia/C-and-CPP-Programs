#include<iostream>
using namespace std;

int main()
{
	float a,b,sum,avg;
	cout << "Enter two numbers...";
	cin >> a;
	cin >> b;
	sum = a + b;
	avg = sum/2;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << avg << endl;
	return 0;
}
