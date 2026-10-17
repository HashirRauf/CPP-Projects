// Take 5 numbers from the user and print them in reverse.
#include <iostream>
using namespace std;
int main()
{
    int numbers[5]; // 0 1 2 3 4
    // Getting 5 input numbers from the user using for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> numbers[i];
    }
    // Now I will print those 5 number is reverse using for loop]
    cout << endl;
    cout << "----------------Displaying Numbers in Reverse----------------" << endl;
    cout << endl;
    for (int i = 5; i >0; i--)
    {
        cout << "Number " << i << " is " << numbers[i-1] << endl;
    }

    return 0;
}