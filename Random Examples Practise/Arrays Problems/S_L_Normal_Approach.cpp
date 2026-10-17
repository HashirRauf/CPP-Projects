// Find the largest and smallest element.
#include <iostream>
using namespace std;
int main()

{
    int array[10];
    int smallest, largest;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
    }
    smallest = array[0];
    largest = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    cout << "The Smallest Number in this Array is: " << smallest << endl;
    cout << "The Largest Number in this Array is: " << largest << endl;

    return 0;
}