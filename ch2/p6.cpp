#include<iostream>
using namespace std;

class temp
{
	public : float cel;
		 float fahr;
		 float conversion();
};

float temp::conversion()
{
	cel = (fahr - 32.0f)*5/9;
	return cel;
}

int main()
{
	temp t;
	cout << "Enter temperature (in F) : ";
	cin >> t.fahr;
	t.conversion();
	cout << "Temperature (in C) = " << t.cel << endl;
	return 0;
}
