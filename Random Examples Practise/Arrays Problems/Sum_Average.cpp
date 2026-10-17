// Find the sum and average of 10 numbers.
#include <iostream>
using namespace std;
int main()
{
    const int count = 10;
    int numbers[count];
    int sum = 0, average = 0;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "The Sum of these " << count << " numbers is: " << sum << endl;
    average = sum / count;
    cout << "The average of these " << count << " numbers is: " << average << endl;

    return 0;
}