//Nathan Morgan's Apartment Building Profitability Checker
#include "Building.h"

#include <iostream>

using namespace std;

int main()
{
    //Declare variables to store building properties
    int price, rent, units;
    
    //Prompt and read in the user's values
    cout << "Enter the building price: ";
    cin >> price;
    cout << endl << "Enter the average rent: ";
    cin >> rent;
    cout << endl << "Enter the of number of units: ";
    cin >> units;
    cout << endl << "Calculating..." << endl << endl;
    
    //Create Building object from inputted values
    Building userBuilding(price, rent, units);
    
    //Output the calculated statistics to the user
    cout << "Estimated Down Payment: " << userBuilding.getDownPayment() << endl;
    cout << "Estimated Yearly Expenses: " << userBuilding.getExpenses() << endl;
    cout << "Estimated Yearly Rents: " << userBuilding.getRents() << endl;
    cout << "Estimated Yearly Profit: " << userBuilding.getProfit();
    
    return 0;
}