#include <iostream>
using namespace std;

class Employee
{
      int id;
      static int count;

public:
      void get_data(void);
      void display(void);
      static void get_count(void);
};

void Employee::get_data(void)
{
      cout << "Enter ID: " << endl;
      cin >> id;
      count++;
}
void Employee::display(void)
{
      cout << "The ID of this Employee is " << id << endl;
}
void Employee::get_count(void)
{
      cout << "This is Employee Number: " << count << endl;
}

int Employee::count;
int main()
{
      Employee e1, e2, e3;
      e1.get_data();
      e1.display();
      Employee::get_count();

      e2.get_data();
      e2.display();
      Employee::get_count();

      e3.get_data();
      e3.display();
      Employee::get_count();
      return 0;
}