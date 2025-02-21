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
        void show_alpha(void){cout << "x = " << x << endl;}
};

class beta
{
    float p,q;
    public :
        beta(float a,float b): p(a),q(b+p)
        {
            cout << "beta initialized" << endl;
        }

        void show_beta(void)
        {
            cout << "p = " << p << endl
                 << "q = " << q << endl;
        }
};

class gamma : public beta, public alpha
{
    int u,v;
    public :
        gamma(int a,int b,float c) : alpha(a*2),beta(c,c),u(a)
        {
            v = b;
            cout << "gamma initialized" << endl;
        }

        void show_gamma(void)
        {
            cout << "u = " << u << endl
                 << "v = " << v << endl;
        }
};

int main()
{
    gamma g(5,2,20.299);
    cout << endl;
    g.show_alpha();
    g.show_beta();
    g.show_gamma();

    return 0;
}