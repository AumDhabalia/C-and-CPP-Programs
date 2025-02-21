#include<iostream>

using namespace std;

class student
{
    protected :
        int roll_no;
    public :
        void get_number(int a){roll_no = a;}
        void put_number(void){cout << "Roll No : " << roll_no << endl;}
};

class test : public student
{
    protected :
        float part1, part2;
    public :
        void get_marks(float a,float b)
        {
            part1 = a; part2 = b;
        }

        void put_marks(void)
        {
            cout << "Marks obtained" << endl
                 << "Part 1 = " << part1 << endl
                 << "Part 2 = " << part2 << endl;
        }
};

class sport
{
    protected :
        float score;
    public :
        void get_score(float a){score = a;}
        void put_score(void)
        {cout << "Sport wt : " << score << endl << endl;}
};

class result : public test, public sport
{
    float total;
    public :
        void display(void);
};

void result::display()
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();

    cout << "Total Score : " << total << endl;
}

int main()
{
    result student1;
    student1.get_number(8);
    student1.get_marks(98,88);
    student1.get_score(9);
    student1.display();

    return 0;
}