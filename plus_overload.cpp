#include<iostream>

using namespace std;

class complex
{
    float x;
    float y;
    public :
        complex(){}
        complex(float real,float imag)
        {x = real;y = imag;}
        complex operator+(complex);
        void display(void);
};

complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}

void complex::display(void)
{
    cout << x << " + j" << y << endl;
}

int main()
{
    complex c1, c2, c3;
    c1 = complex(2.5,3.4);
    c2 = complex(4.5,3.2);

    c3 = c1 + c2;

    cout << "C1 = ";c1.display();
    cout << "C2 = ";c2.display();
    cout << "C3 = ";c3.display();

    return 0;
}