// Count how many even and odd numbers are in an array.
#include <iostream>
using namespace std;
int main()
{
    int count = 5, size, even_count = 0, odd_count = 0;
    int array[count];
    cout << "Enter 10 Numbers one by one" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
    }
    size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < count; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout << "Total Even Numbers are: " << even_count << endl;
    cout << "Total Odd Numbers are: " << odd_count << endl;

    return 0;
}