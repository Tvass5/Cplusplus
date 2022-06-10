#include <iostream>

#include "savings.h"

using namespace std;

int main()

{   
    

    while (1)

    {   //Print heading

        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: " << endl;

        cout << "Monthly Deposit: " << endl;

        cout << "Annual Interest: " << endl;

        cout << "Number of years: " << endl;


        //Wait for input from user

        system("PAUSE");


        cout << endl;

        //Get the inputs from user
        double investment, monthlydeposit, rate;

        int years;


        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: $";

        cin >> investment;

        cout << "Monthly Deposit: $";

        cin >> monthlydeposit;

        cout << "Annual Interest: %";

        cin >> rate;

        cout << "Number of years: ";

        cin >> years;



        //Wait for input from user
        system("PAUSE");



        //Create savings object using the given inputs

        savings mysavings = savings(investment, monthlydeposit, rate, years);

        cout << endl;

        //Invoke the report methods
        if (investment < 0) {

            cout << "Invalid entry, cannot display report, please enter Investment amount greater than 0";
        }
        else {

            mysavings.reportNoMonthlyDeposits();

        }

        cout << endl;
        cout << endl;


        //call monthly deposit report, if it has monthly deposit at least $1

        if (monthlydeposit > 0) {

            mysavings.reportWithMonthlyDeposits();

        }
        else {
            cout << "Cannot display report with monthly deposit, please enter deposit amount greater than 0. ";
        }



        //Get the user choice if they want to try another

        cout << endl; 

        cout << "Do you want to try another? (y/n): ";

        string choice;

        cin >> choice;

        //If user doesnot want to try another, break the loop

        if (choice != "y") {

            break;

        }

        cout << endl;

    }

    return 0;

}