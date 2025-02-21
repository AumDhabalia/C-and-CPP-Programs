#include<iostream>

using namespace std;

class integer
{
    int m,n;
    public : integer(int ,int);
             void display(void);
};

integer::integer(int x = 0,int y = 0)
{
    m = x;
    n = y;
}

void integer::display(void)
{
    cout << "m = " << m << "\n";
    cout << "n = " << n << "\n";
}

int main()
{
    integer a1(10,20);
    integer a2(1,1);
    cout << "Object 1" << endl;
    a1.display();
    
    cout << "Object 2" << endl;
    a2.display();

    return 0;
}