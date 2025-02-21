#include<iostream>

using namespace std;

class M
{
    protected :
        int m;
    public :
        void get_m(int);
};

class N
{
    protected :
        int n;
    public :
        void get_n(int);
};

class P : public M, public N
{
    public :
        void display(void);
};

void M::get_m(int a)
{
    m = a;
}

void N::get_n(int a)
{
    n = a;
}

void P::display()
{
    cout << "m = " << m << endl
         << "n = " << n << endl
         << "m * n = " << m*n << endl;
}

int main()
{
    P p;
    p.get_m(22);
    p.get_n(11);
    p.display();

    return 0;
}