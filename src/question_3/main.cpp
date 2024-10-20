#include<iostream>
#include "question3.h"
using std::cout; using std::cin;

int main()
{
    char choice;
    string answer;
    int user_input;

    do
    {
        cout<<"Enter an integer from 1 - 255 (or '0' to exit) \n";
        cin>> user_input;

        if(user_input < 0 || user_input > 255)
        {
            cout<<"Invalid entry try again \n";
        }
        else if(user_input == 0)
        {
            break;
        }
        else
        {
            answer = decimal_to_binary(user_input);
            cout<<"The binary of "; cout<<user_input; cout<<" is "; cout<<answer; cout<<"\n";
        }

        cout<<"Would you like to enter another number? (y/n)";\
        cin>>choice;

    } while (choice == 'y' || choice == 'Y');
    return 0;
}