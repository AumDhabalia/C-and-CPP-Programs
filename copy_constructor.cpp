#include<iostream>

using namespace std;

class code
{
    int id;
    public : 
        code();
        code(int a);
        code(code &x);
        void display(void);
};

code::code(){}
code::code(int a){id = a;}
code::code(code &x){id = x.id;}
void code::display(void)
{
    cout << id;
}

int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;

    cout << "id of A : ";
    A.display();
    cout << endl << "id of B : ";
    B.display();
    cout << endl << "id of C : ";
    C.display();
    cout << endl << "id of D : ";
    D.display();
    cout << endl;

    return 0;
}