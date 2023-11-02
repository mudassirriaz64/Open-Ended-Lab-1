#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username, bookname;
	int  days,fine;
	char choice, finechoice;
	cout << "enter your name : ";
	getline(cin, username);
	cout << "library system main menu " << endl;
	cout << "1. borrow" << endl;
	cout << "2. return" << endl; 
	cout << "press q to quit" << endl;
	cout << "enter your choice : ";
	cin >> choice;
	if (choice == '1')
	{
		cout << "enter the name of the book you want to borrow : ";
		cin.ignore();
		getline(cin, bookname);
		cout << "congratulations!, you have borrowed the book " <<"\""<< bookname<<"\"" << endl;
		cout << "ensure to return the book in 3 days otherwise fine will be imposed of 1$ per day." << endl;
	}
	else if (choice == '2')
	{
		cout << "enter the book name which you want to return : ";
		cin.ignore();
		getline(cin,bookname);
		cout << "from how many days, you had the book?"<< endl;
		cin >> days;
		if (days > 3) //limit is 3 days, if return date is greater than 3 days, fine will be imposed
		{
			fine = days - 3;
			cout << "oops!, looks like you are late, so there will be a fine(there was a due date of 3 days)" << endl;
			cout << "you are " << fine << " days late" << endl;
			cout << "your total fine will be = " << fine << "$" << endl;
			cout << "please pay fine first " << endl;
			cout << "do you want to pay the fine(y/n): ";
			cin >> finechoice;
			if (finechoice == 'y' || finechoice == 'y')
			{
				cout << "fine paid!, you can now return the book " << endl;
			}
			else if (finechoice == 'n' || finechoice == 'n')
			{
				cout << "it is compulsory to pay the fine." << endl;
			}
		}
		
	}
	else if (choice == 'q' || choice == 'q' || choice == '3')
	{
		cout << "thank you for your time" << endl;
	}
	else
	{
		cout << "incorrect choice" << endl;
	}
	system("pause");
	return 0;
}