#include<iostream>

using namespace std;
const int m = 50;

class ITEMS
{
	int itemCode[m];
	float itemPrice[m];
	int count;
	public : void CNT(void)
		 {
			 count = 0;
		 }

		 void clearPrice(void)
		 {
			 for(int i = 0;i < m;i++)
				 itemPrice[i] = 0;
		 }
		 void getitem(void);
		 void displaySum(void);
		 void remove(void);
		 void displayItems(void);
};

void ITEMS::getitem()
{
	cout << "Enter item code : ";
	cin >> itemCode[count];

	cout << "Enter item cost : ";
	cin >> itemPrice[count];
	count++;
}

void ITEMS::displaySum(void)
{
	float sum = 0;
	for(int i = 0;i < count;i++)
		sum += itemPrice[count];

	cout << endl << "Total Value : " << sum << endl;
}

void ITEMS::remove(void)
{
	int a;
	cout << "Enter item code : ";
	cin >> a;
	
	for(int i = 0;i < count;i++)
		if(itemCode[i] == a)
			itemPrice[i] = 0;
}

void ITEMS::displayItems(void)
{
	cout << endl << "Code\tPrice" << endl;
	for(int i = 0;i < count;i++)
	{
		cout << endl << itemCode[i] << "\t" << itemPrice[i];
	}
	cout << endl;
}

int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do
	{
		cout << "You can do the following..." << endl
		     << "Enter appropriate number" << endl;
		cout << "1 : Add an item" << endl
		     << "2 : Display total value" << endl
		     << "3 : Delete an item" << endl
		     << "4 : Display all item" << endl
		     << "5 : Quit" << endl;
		cout << "What is your option?" << endl;
		cin >> x;

		switch(x)
		{
			case 1:order.getitem();break;
			case 2:order.displaySum();break;
			case 3:order.remove();break;
			case 4:order.displayItems();break;
			case 5:break;
			default:cout << "Error in input...\nTry again : ";
		}
	}
	while(x!= 5);

	return 0;
}
