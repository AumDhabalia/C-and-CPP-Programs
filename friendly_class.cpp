#include<iostream>

using namespace std;

class ABC;

class XYZ
{
	int x;
	public : void setvalue(int i)
		 {
			 x = i;
		 }

		 friend void max(XYZ,ABC);
};

class ABC
{
	int a;
	public : void setvalue(int i)
		 {
			 a = i;
		 }

		 friend void max(XYZ,ABC);
};

void max(XYZ a,ABC b)
{
	if(a.x >= b.a)
		cout << a.x;
	else
		cout << b.a;
	cout << endl;
}

int main()
{
	ABC abc;
	abc.setvalue(10);
	XYZ xyz;
	xyz.setvalue(20);
	max(xyz,abc);

	return 0;
}
