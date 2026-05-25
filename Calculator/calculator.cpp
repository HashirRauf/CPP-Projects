#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char op, y_n;
    double num1, num2, result;

    do
    {
        cout << "*********************** CALCULATOR *********************" << endl;
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
        cout << "Enter any of the following character( + - * / ): " << endl;
        cin >> op;
        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << "The Sum of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "The Subtraction of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "The Multiplication of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        case '/':
            while (num2 == 0)
            {
                cout << "ERROR: Division by zero is not possible" << endl;
                cout << "Enter num2 again: " << endl;
                cin >> num2;
            }
            result = num1 / num2;
            cout << "The Divison of " << num1 << " and " << num2 << " is " << result << endl;
            break;
        default:
            cout << "INVALID OPERATOR" << endl;
            continue;
        }
        cout << "Do you want to start again: " << endl;
        cin >> y_n;
    } while (y_n == 'Y' || y_n == 'y');

    cout << endl;

    cout << "**************************** END ******************************" << endl;

    system("PAUSE");
    return 0;
}
