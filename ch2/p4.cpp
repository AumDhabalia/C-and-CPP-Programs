#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Enter a : ";
	cin >> a;
	cout << "Enter b : ";
	cin >> b;
	cout << "Enter c : ";
	cin >> c;

	int x = a/b - c;

	cout << "x = "<< x << endl;
	return 0;
}
