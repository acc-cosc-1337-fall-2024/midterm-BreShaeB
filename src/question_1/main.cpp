#include "question1.h"
#include<string>
using std::cout; using std::cin; using std::string;

int main()
{
    int user_option;
    int answer;
    int user_input;

    cout<<"Main Menu \n 1-Calculate Hours \n 2-Calculate Minutes \n 3-Calculate Seconds \n Option: ";
    cin>> user_option;

	switch(user_option)
	{
		case 1:
		cout<<"Enter seconds since 1970: ";
        cin>> user_input;
        answer = get_hours(user_input);
        cout<<"Its been "; cout<<answer; cout<<" hours since 1970.\n";
		break;

		case 2:
        cout<<"Enter seconds since 1970: ";
        cin>> user_input;
        answer = get_minutes(user_input);
        cout<<"Its been "; cout<<answer; cout<<" minutes since 1970.\n";
		break;

		case 3:
        cout<<"Enter seconds since 1970: ";
        cin>> user_input;
        answer = get_seconds(user_input);
        cout<<"Its been "; cout<<answer; cout<<" seconds since 1970.\n";
		break;
	}
    return 0;
}