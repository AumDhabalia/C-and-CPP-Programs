#include<iostream>

using namespace std;

class student
{
    protected :
        int roll_no;
    public :
        void get_number(int);
        void put_number(void);
};

void student::get_number(int a)
{
    roll_no = a;
}

void student::put_number()
{
    cout << "Roll Number : " << roll_no << endl;
}

class test : public student
{
    protected : 
        float sub1;
        float sub2;
    public :
        void get_marks(float ,float);
        void put_marks(void);
};

void test::get_marks(float a,float b)
{
    sub1 = a;
    sub2 = b;
}

void test::put_marks()
{
    cout << "Marks of subject 1 : " << sub1 << endl
         << "Marks of subject 2 : " << sub2 << endl;
}

class result : public test
{
    float total;
    public :
        void display(void);
};

void result::display()
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "Total = " << total << endl;
}

int main()
{
    result student1;

    student1.get_number(11);
    student1.get_marks(77,88);
    student1.display();

    return 0;
}