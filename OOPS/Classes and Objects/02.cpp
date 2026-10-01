#include <iostream>
#include <string>
using namespace std;

class rectangle
{
private:
    int length, width;

public:
    void set()
    {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
    void area()
    {
        double area = length * width;
        cout << "Area is: " << area << endl;
    }
    void perimeter()
    {
        int p = 2 * (length + width);
        cout << "Perimeter is: " << p << endl;
    }
};

int main()
{
    cout << "------------- Rectangle 1 --------------" << endl;
    rectangle r1, r2;
    r1.set();
    cout << endl;
    r1.area();
    cout << endl;
    r1.perimeter();
    cout << endl;
    cout << "------------- Rectangle 2 --------------" << endl;
    r2.set();
    cout << endl;
    r2.area();
    cout << endl;
    r2.perimeter();

    return 0;
}