#include<iostream>

using namespace std;

class student
{
    protected :
        int roll_no;
    public :
        void get_number(int a){roll_no = a;}
        void put_number(void){cout << "Roll no : " << roll_no << endl;}
};

class test : virtual public student
{
    protected :
        float part1, part2;
    public :
        void get_marks(float a,float b){part1 = a;part2 = b;}
        void put_marks(void)
        {
            cout << "Marks obtained..." << endl
                 << "Part 1 = " << part1 << endl
                 << "Part 2 = " << part2 << endl;
        }
};

class sports : public virtual student
{
    protected :
        float score;
    public :
        void get_score(float s){score = s;}
        void put_score(void){cout << "Sport wt = " << score << endl << endl;}
};

class result : public test, public sports
{
    float total;
    public :
        void display(void)
        {
            total = part1 + part2 + score;

            put_number();
            put_marks();
            put_score();

            cout << "Total Score  = " << total << endl;
        }
};

int main()
{
    result student1;
    student1.get_number(8);
    student1.get_marks(87,77.90);
    student1.get_score(66);
    student1.display();
    cout << "Size of student = " << sizeof(student) << endl
         << "Size of test = " << sizeof(test) << endl
         << "Size of sport = " << sizeof(sports) << endl;
    cout << "Size of student1 = " << sizeof(student1) << endl;
    return 0;
}