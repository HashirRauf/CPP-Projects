// Find the largest and smallest element.
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[] = {0, 52, 41, 41};
    int size = sizeof(array) / sizeof(array[0]);
    auto result = minmax_element(array, array + size);
    cout << "Smallest Number is: " << *result.first << endl;
    cout << "Largest Number is: " << *result.second;
    return 0;
}