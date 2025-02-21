#include<iostream>
using namespace std;

int main()
{
	float fahr;
	float cel;
	cout << "Enter temperature (in F) : ";
	cin >> fahr;
	cel = (fahr - 32.0f)*5/9;
	cout << "Temperture (in C) = " << cel << endl;
	return 0;
}
