#include <iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        const int subj = 3;
        string name;
        int marks[3];
        float total = 0, average = 0;
        cout << "Enter your name: " << endl;
        getline(cin, name);
        for (int i = 0; i < subj; i++)
        {
            cout << "Enter marks for Subject: " << i << endl;
            cin >> marks[i];
        }
        for (int i = 0; i < subj; i++)
        {
            total = total + marks[i];
        }
        average = total / subj;
        cout << "Hi " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks is: " << average << endl;
        if (average >= 70)
        {
            cout << "You got A grade" << endl;
        }
        else if (average >= 50 && average < 70)
        {
            cout << "You got B grade" << endl;
        }
        else if (average < 50)
        {
            cout << "You got C grade" << endl;
        }
        cout << "Do you want to Calculate Again(y/n): " << endl;
        cin>>choice;

    } while (choice == 'y' || choice=='Y');

    return 0;
}