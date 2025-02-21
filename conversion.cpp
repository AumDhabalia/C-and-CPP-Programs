#include <iostream>

using namespace std;

class invent2;

class invent1
{
    int code;
    int items;
    float price;
    public:
        invent1(int a, int b, float c)
        {
            code = a;
            items = b;
            price = c;
        }
        void putdata()
        {
            cout << "Code : " << code << endl;
            cout << "Items : " << items << endl;
            cout << "Value : " << price << endl;
        }
        int getcode() {return code;}
        int getitems() {return items;}
        float getprice() {return price;}
        operator float() {return items*price;}
        operator invent2();
        ~invent1(){}
};

class invent2
{
    int code;
    float value;
    public:
        invent2(){code = 0;value = 0;}
        invent2(int a, float b){code = a;value = b;}
        void putdata()
        {
            cout << "Code : " << code << endl;
            cout << "Value : " << value << endl << endl;
        }
        ~invent2(){}
        friend class invent1;
};

invent1::operator invent2()
{
    return invent2(code, items * price);
}

int main()
{
    invent1 s1(100, 4, 134.2);
    invent2 d1;
    float total_value;

    total_value = s1;

    d1 = s1;

    cout << "Product details  - invent1 type" << endl;
    s1.putdata();

    cout << endl << "Stock value" << endl;
    cout << "Value = " << total_value << endl;

    cout << endl << "Product details - invent2 type" << endl;
    d1.putdata();

    return 0;
}