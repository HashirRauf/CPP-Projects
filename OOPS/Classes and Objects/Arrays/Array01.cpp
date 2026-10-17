#include <iostream>
using namespace std;

class shop
{
private:
	int itemID[50];
	int itemPrice[50];
	int counter;

public:
	void init_counter(void);
	void get_things(void);
	void display(void);
};
void shop::init_counter(void)
{
	counter = 0;
}
void shop::get_things(void)
{
	cout << "Enter ID of item: " << counter + 1 << ": ";
	cin >> itemID[counter];
	cout << "Enter Price of item: " << counter + 1 << " : ";
	cin >> itemPrice[counter];
	counter++;
}
void shop::display(void)
{
	for (int i = 0; i < counter; i++)
	{
		cout << "The Price of item with ID " << itemID[i] << " is " << itemPrice[i] << "$" << endl;
	}
}
int main()
{
	shop s1;
	s1.init_counter();
	cout << "---------------------Getting Data-------------------" << endl;
	s1.get_things();
	cout << endl;
	s1.get_things();
	cout << endl;
	s1.get_things();
	cout << endl;
	cout << "---------- Displaying Data --------" << endl;
	s1.display();
	return 0;
}