#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username, bookname;
	int  days,fine;
	char choice, finechoice;
	cout << "Enter your name : ";
	getline(cin, username);
	cout << "Library System Main Menu " << endl;
	cout << "1. Borrow" << endl;
	cout << "2. Return" << endl; 
	cout << "Press Q to quit" << endl;
	cout << "Enter your choice : ";
	cin >> choice;
	if (choice == '1')
	{
		cout << "Enter the name of the book you want to borrow : ";
		cin.ignore();
		getline(cin, bookname);
		cout << "Congratulations!, you have borrowed the book " <<"\""<< bookname<<"\"" << endl;
		cout << "Ensure to return the book in 3 days otherwise fine will be imposed of 1$ per day." << endl;
	}
	else if (choice == '2')
	{
		cout << "Enter the book name which you want to return : ";
		cin.ignore();
		getline(cin,bookname);
		cout << "From how many days, you had the book?"<< endl;
		cin >> days;
		if (days > 3) //Limit is 3 days, if return date is greater than 3 days, fine will be imposed
		{
			fine = days - 3;
			cout << "Oops!, looks like you are late, so there will be a fine(there was a due date of 3 days)" << endl;
			cout << "Your total fine will be = " << fine << "$" << endl;
			cout << "Please Pay fine first " << endl;
			cout << "Do you want to pay the fine(Y/N): ";
			cin >> finechoice;
			if (finechoice == 'Y' || finechoice == 'y')
			{
				cout << "Fine paid!, you can now return the book " << endl;
			}
			else if (finechoice == 'N' || finechoice == 'n')
			{
				cout << "It is compulsory to pay the fine." << endl;
			}
		}
		
	}
	else if (choice == 'q' || choice == 'Q' || choice == '3')
	{
		cout << "Thank you for your time" << endl;
	}
	else
	{
		cout << "Incorrect choice" << endl;
	}
	system("pause");
	return 0;
}