#include<iostream>

using namespace std;

class employee
{
	char name[30];
	float age;
	public : void getdata(void);
		 void setdata(void);
};

void employee::getdata(void)
{
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter age : ";
	cin >> age;
}

void employee::setdata(void)
{
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
}

int main()
{
	const int size = 3;
	employee manager[size];
	for(int i = 0;i < size;i++)
	{
		cout << "Details of manager" << i+1 << endl;
		manager[i].getdata();
	}
	cout << endl << endl;

	for(int i = 0;i < size;i++)
	{
		cout << "Manager " << i+1 << endl;
		manager[i].setdata();
	}

	return 0;
}
