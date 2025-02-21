#include<iostream>

using namespace std;

class item
{
	int number;
	float cost;
	public : void getdata(int,float);
		 void putdata(void)
		 {
			 cout << "Number : " << number << endl;
			 cout << "Cost : " << cost << endl;
		 }
};

void item::getdata(int a,float b)
{
	number = a;
	cost = b;
}

int main()
{
	item x;
	cout << "OBJECT x" << endl;
	x.getdata(22,34.454);
	x.putdata();

	item y;
	cout << "OBJECT y" << endl;
	y.getdata(90,09.89);
	y.putdata();

	return 0;
}
