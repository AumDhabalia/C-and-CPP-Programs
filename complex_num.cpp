#include<iostream>
using namespace std;

class Complex
{
	float x;
	float y;
	public : void input(float real,float imag)
		 {
			 x = real;
			 y = imag;
		 }

		 friend Complex sum(Complex,Complex);
		 void show(Complex);
};

void Complex::show(Complex c)
{
	cout << c.x << " + j" << c.y << endl;
}

Complex sum(Complex c1,Complex c2)
{
	Complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

int main()
{
	Complex c1, c2, c3;

	c1.input(3.1,3.76);
	c2.input(6.6,7.88);
	c3 = sum(c1,c2);

	cout << "c1 : "; c1.show(c1);
	cout << "c2 : "; c2.show(c2);
	cout << "c3 : "; c3.show(c3);

	return 0;
}
