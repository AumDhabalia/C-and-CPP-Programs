#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	int *p = new int(5);
	cout << *p << endl;
	delete(p);
	return 0;
}
