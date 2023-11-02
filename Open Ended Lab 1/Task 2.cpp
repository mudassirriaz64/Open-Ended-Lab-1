//#include<iostream>
//using namespace std;
//int main()
//{
//	int number, maximum=0, minimum=0, i;
//	char user_choice;
//	cout << "Press 1 to check whether a specific number is prime or not." << endl;
//	cout << "Press 2 to specify a range and find prime number within the range." << endl;
//	cin >> user_choice;
//	if (user_choice == '1')
//	{ //Boundary Of If
//        bool is_prime = true;
//        cout << "Enter a positive integer: ";
//        cin >> number;
//        if (number == 0 || number == 1) 
//            /*0 and 1 are not prime numbers, so this if statement will check if the user
//             entered 0 or 1, if the user entered 0 and 1, the boolean expression will
//             become false and will not print any numbers*/
//        {
//            is_prime = false;
//        }
//
//        // loop to check if number is prime
//        for (i = 2; i <= number / 2; ++i)
//        { //Boundary of For Loop
//            if (number % i == 0)
//            {
//                is_prime = false;
//                break;
//            }
//        } //Boundary of For Loop
//        if (is_prime)
//            cout << number << " is a prime number";
//        else
//            cout << number << " is not a prime number";
//
//        system("pause");
//        return 0;
//	} //Boundary Of If
//    else if (user_choice == '2')
//    { //Boundary Of Else If
//            bool is_prime = true;
//
//            cout << "Enter starting point of the range = ";
//            cin >> minimum;
//            cout<<"Enter ending point of the range = ";
//            cin >> maximum;
//            cout << "\nPrime numbers between " << minimum << " and " << maximum << " are: " << endl;
//            while (minimum < maximum) 
//            { //Boundary Of while loop
//                is_prime = true; //Boolean Expression set to true(Default)
//
//                if (minimum == 0 || maximum == 1)
//                    /*0 and 1 are not prime numbers, so this if statement will check if the user
//                    entered 0 or 1, if the user entered 0 and 1, the boolean expression will
//                    become false and will not print any numbers*/
//                {
//                    is_prime = false;
//                }
//                for (i = 2; i <= minimum / 2; ++i) 
//                { //Boundary of For Loop
//                    if (minimum % i == 0)
//                    {
//                        is_prime = false;
//                        break;
//                    }
//                } //Boundary of For Loop
//                if (is_prime)
//                {
//                    cout << minimum << ", "; // print prime numbers between given numbers.
//                }
//                minimum++;
//            } //Boundary Of while loop
//        return 0;
//    } //Boundary of Else If
//}