#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    int marks;

    void set(string n, int m)
    {
        name = n;
        marks = m;
    }
    void show()
    {
        cout << name << " got " << marks << " marks" << endl;
    }
};

int main()
{
    student s1;
    s1.set("Ali", 85);
    s1.show();

    return 0;
}