#include <iostream>
#include <stdlib.h>
using namespace std;

void say_hello()
{
    cout << "Hello.Hope you are doing well..." << endl;
}
void add_numbers(double a, double b)
{
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
}
void e_o_check(int a)
{
    if (a % 2 == 0)
    {
        cout << a << " is a even number..." << endl;
    }
    else
    {
        cout << a << " is a odd number..." << endl;
    }
}
void leave()
{
    cout << "Thank you for using this Basic Menu APP" << endl;
}

int main()
{
    int choice, a, b;
    cout << "------------Basic Menu App using user defined funtions-----------" << endl;
    cout << "Choose any of the following functions to perform: " << endl;
    cout << "1. Say Hello\n"
            "2. Add two numbers\n"
            "3. Check if number is even or odd\n"
            "4. Exit the program\n"
         << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        say_hello();
        break;
    case 2:
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
        add_numbers(a, b);
        break;
    case 3:
        cout << "Enter a number: " << endl;
        cin >> a;
        e_o_check(a);
        break;
    case 4:
        leave();
        break;

    default:
        cout << "Invalid Choice entered" << endl;
        break;
    }

    system("PAUSE");
    return 0;
}
