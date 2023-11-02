#include<iostream>
#include<string>
using namespace std;
int main()
{
	string username, bookname;
	int borrowdate, returndate=0, remainderdate,fine,todaydate;
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
		cin >> bookname;
		cout << "Enter the date of the day on which you want to return the book(30 days) : ";
		cin>>returndate;
		cout << "Congratulations!, you have borrowed the book " << bookname << endl;
		cout << "Ensure to return the date before the due date" << endl;
	}
	else if (choice == '2')
	{
		cout << "Enter the book name which you want to return : ";
		cin>>bookname;
		cout << "Enter the date you borrowed the book ";
		cin >> borrowdate;
		cout << "Enter today date ";
		cin >> todaydate;
		remainderdate = borrowdate - todaydate;
		cout << " Oops!, looks like you came late so there will be a fine, it will 1$ a day. " << endl;
		cout << "Days Late = " << remainderdate << endl;
		fine = 1 * remainderdate;
		cout << "Your total fine will be = " << fine <<"$"<< endl;
		cout << " Please Pay fine first "<< endl;
		cout << "Do you want to pay the fine(Y/N): ";
		cin >> finechoice;
		if (finechoice == 'Y' || finechoice == 'y')
		{
			cout << "Fine paid!, now you can return the book ";
		}
		else if (finechoice == 'N' || finechoice == 'n')
		{
			cout << "It is compulsory to pay the fine." << endl;
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