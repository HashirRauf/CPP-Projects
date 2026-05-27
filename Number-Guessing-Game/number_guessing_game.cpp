#include <iostream>
using namespace std;
int main()
{
    int guess, tries = 0;
    char choice;
    bool won = false;
    srand(time(NULL));
    int num = (rand() % 6) + 1;

    cout << "************************************Number Guessing Game*************************************" << endl;
    cout << "You only get 5 tries....." << endl;

    do
    {
        cout << "Guess a number from 1 to 6: " << endl;
        cin >> guess;

        if (guess <= 6 && guess >= 1)
        {
            tries++;
            if (guess == num)
            {
                won = true;
            }
            else if (tries == 5)
            {
                cout << "No of tries reached......." << endl;
                break;
                cout<<"Do you want to run the game again: "<<endl;
                cin>>choice;
            }
            else if (guess > num)
            {
                cout << "TOO HIGH" << endl;
            }
            else if (guess < num)
            {
                cout << "TOO LOW" << endl;
            }
           
        }

        else if (guess >= 7)
        {
            cout << "Wrong Input..Guess number only from 1 to 6." << endl;
            cout << "TRY AGAIN" << endl;
        }
        else if (guess < 0)
        {
            cout << "Negative numbers not allowed....!!!!" << endl;
            cout << "TRY AGAIN" << endl;
        }
        

    } while (guess != num);

    if (won == true)
    {
        cout << "Congratulations!!!!!!! You guessed correct number........." << endl;
        cout << "The number was: " << num << endl;
        cout << endl;
        cout << "No of tries you took: " << tries << endl;
        
    }
    else if (won == false)
    {
        cout << "You Lost the Game...Your number of TRIES REACHED the limit" << endl;
        cout << "The number was: " << num << endl;
    }
    cout << "**************************************************************************************************" << endl;

    return 0;
}
