#include<iostream>

using namespace std;

class space
{
    int x,y,z;
    public :
        void getdata(int ,int ,int);
        void display(void);
        void operator-();
};

void space::getdata(int a,int b,int c)
{
    x = a;
    y = b;
    z = c;
}

void space::display(void)
{
    cout << x << " ";
    cout << y << " ";
    cout << z << " " << endl;
}

void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space S;
    S.getdata(10,20,-9);
    cout << "S : ";
    S.display();

    -S;

    cout << "S : ";
    S.display();

    return 0;
}