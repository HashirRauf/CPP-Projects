// To Find the sum of only even and odd numbers in an Array
#include <iostream>
using namespace std;
int main()
{
    int count = 5, even_sum = 0, odd_sum = 0; // Size of Array by Default.No need to find Size of this Array
    int array[count];
    for (int i = 0; i < count; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> array[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_sum += array[i];
        }
        else
        {
            odd_sum += array[i];
        }
    }
    cout << "Sum of Even Numbers is: " << even_sum << endl;
    cout << "Sum of Odd Numbers is: " << odd_sum << endl;

    return 0;
}