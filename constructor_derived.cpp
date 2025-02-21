#include<iostream>

using namespace std;

class alpha
{
    int x;
    public :
        alpha(int i)
        {
            x = i;
            cout << "alpha initialized" << endl;
        }
        void show_x(void){cout << "x = " << x << endl;}
};

class beta
{
    float y;
    public :
        beta(float j)
        {
            y = j;
            cout << "beta initialized" << endl;
        }

        void show_y(void){cout << "y = " << y << endl;}
};

class gamma : public alpha, public beta
{
    int m,n;
    public :
        gamma(int a,float b,int c,int d) : alpha(a),beta(b)
        {
            m = c;
            n = d;
            cout << "gamma initialized" << endl;
        }

        void show_mn(void)
        {
            cout << "m = " << m << endl
                 << "n = " << n << endl;
        }
};

int main()
{
    gamma g(5, 10.99, 20,22);
    cout << endl;
    g.show_x();
    g.show_y();
    g.show_mn();

    return 0;
}