#include<iostream>

using namespace std;

class Fixed_deposit
{
    long int principle;
    int years;
    float rate;
    float return_value;

    public :
        Fixed_deposit(){}
        Fixed_deposit(long int,int y,float r = 0.10);
        Fixed_deposit(long int ,int ,int);
        void display(void);
};

Fixed_deposit::Fixed_deposit(long int p,int y,float r)
{
    principle = p;
    years = y;
    rate = r;
    return_value = principle;
    for(int i = 0;i <= y;i++)
    {
        return_value = return_value*(1.0 + r);
    }
}

Fixed_deposit::Fixed_deposit(long int p,int y, int r)
{
    principle = p;
    years = y;
    rate = r;
    return_value = principle;
    for(int i = 0;i <= years;i++)
    {
        return_value = return_value*(1.0 + float(r)/100);
    }
}

void Fixed_deposit::display(void)
{
    cout << endl;
    cout << "Principle Amount = " << principle << endl;
    cout << "Return Value = " << return_value << endl;
}

int main()
{
    Fixed_deposit FD1,FD2,FD3;
    long int p;
    int y;
    float r;
    int R;

    cout << "Enter amount, period, interest, rate (in percent)" << endl;
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p,y,R);

    cout << "Enter amount, period, interest, rate (in decimal)" << endl;
    cin >> p >> y >> r;
    FD2 = Fixed_deposit(p,y,r);

    cout << "Enter amount and period" << endl;
    cin >> p >> y;
    FD3 = Fixed_deposit(p,y);

    cout << endl << "Deposit 1";
    FD1.display();

    cout << endl << "Deposit 2";
    FD2.display();

    cout << endl << "Deposit 3";
    FD3.display();

    return 0;
}