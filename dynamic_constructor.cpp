#include<iostream>
#include<cstring>

using namespace std;

class String
{
    char *name;
    int length;
    public :
        String();
        String(char *s);
        void display();
        void join(String &a,String &b);
};

String::String()
{
    length = 0;
    name = new char[length + 1];
}

String::String(char *a)
{
    length = strlen(a);
    name = new char[length + 1];
    strcpy(name,a);
}

void String::join(String &a,String &b)
{
    length = a.length + b.length;
    delete name;
    name = new char[length + 1];

    strcpy(name,a.name);
    strcat(name,b.name);
}

void String::display(void)
{
    cout << name << endl;
}

int main()
{
    char *first = "Joseph ";
    String name1(first),name2("Louis "), name3("Lagrange"), s1, s2;
    s1.join(name1,name2);
    s2.join(s1,name3);

    name1.display();
    name2.display();
    name3.display();

    s1.display();
    s2.display();

    return 0;
}
