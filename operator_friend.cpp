#include<iostream>

using namespace std;

const int vectorSize = 3;

class vector
{
    int v[vectorSize];
    public :
        vector();
        vector(int *x);
        friend vector operator*(int ,vector);
        friend vector operator*(vector ,int);
        friend istream &operator>>(istream &, vector &);
        friend ostream &operator<<(ostream &, vector &);
};

vector::vector()
{
    for(int i = 0;i < vectorSize;i++)
        v[i] = 0;
}

vector::vector(int *x)
{
    for(int i = 0;i < vectorSize;i++)
        v[i] = x[i];
}

vector operator*(int a,vector b)
{
    vector c;
    for(int i = 0;i < vectorSize;i++)
        c.v[i] = a * b.v[i];
    return c;
}

vector operator*(vector a,int b)
{
    vector c;
    for(int i = 0;i < vectorSize;i++)
        c.v[i] = a.v[i] * b;
    return c;
}

istream &operator >>(istream &din, vector &b)
{
    for(int i = 0;i < vectorSize;i++)
        din >> b.v[i];
    return din;
}

ostream &operator <<(ostream &dout,vector &b)
{
    dout << "(";
    for(int i = 0;i < vectorSize;i++)
        dout << b.v[i] << ",";
    dout << "\b)";
    return dout;
}

int x[vectorSize] = {2,3,4};

int main()
{
    vector m;
    vector n = x;

    cout << "Enter elements of vector m" << endl;
    cin >> m;

    cout << endl;
    cout << "m = " << m << endl;

    vector p,q;
    p = 2 * m;
    q = n * 2;

    cout << endl;
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

    return 0;
}