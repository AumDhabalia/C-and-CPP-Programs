#include<iostream>
using namespace std;

int main()
{
	int a = 10, &b = a;
	cout <<"a = "<< a << endl
	     <<"b = "<< b << endl
	     <<"&a = "<< &a << endl
	     <<"&b = "<< &b << endl;
	++a;

	cout <<"a = "<< a << endl
	     <<"b = "<< b << endl;

	++b;

	cout <<"a = "<< a << endl
	     <<"b = "<< b << endl;
	
	return 0;
}
