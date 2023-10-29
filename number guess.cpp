#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"NUMBER GUESSING GAME"<<endl;
    cout<<endl;
    srand(time(nullptr));
    cout<<"Guess a number between 1 to 100"<<endl<<endl;
    int secretNumber = 1 + (rand() % 100);
    int attempt=0;
    int choice;
    for(int i=0;i<1000;i++)
    {
        cout<<"Enter the number you guessed : ";
        cin>>choice;

        if(choice<0 || choice>100)
        {
            cout<<"Please enter a number between 1 to 100"<<endl<<endl;
        }
        else
        {
            if (choice == secretNumber)
            {
                attempt++;
                cout<<"---------------------------------------------------------------------------";
                cout<<endl;
                cout<<"Good job! You found it"<<endl;
                cout<<"The secret number is "<<secretNumber<<endl;
                cout<<"---------------------------------------------------------------------------"<<endl;
                cout<<"No of attempts made : "<<attempt<<endl;
                break;
            }
            else
            {
                if(choice > secretNumber)
                {
                    attempt++;
                    cout<<endl;
                    cout<<"Try with a smaller number..."<<endl<<endl;
                }
                else if(choice < secretNumber)
                {
                    attempt++;
                    cout<<endl;
                    cout<<"Try with a larger number..."<<endl<<endl;
                }
            }
        }
    }
}
