/*
 * Section 8 Challenge
 * 
 * For this program I will be using US dollars and cents
 * 
 * Write a program that asks the user to enter the following:
 * An integer representing the number of cents
 * 
 * You may assume that the number of cents entered is greater than or equal to zero
 * 
 * The program should then display how to provide that change to the user.
 * 
 * In the US;
 *  1 dollar is 100 cents
 *  1 quarter is 25 cents
 *  1 dime is 10 cents
 *  1 nickel is 5 cents, and
 *  1 penny is 1 cent
 * 
 * Here is a sampel run:
 * 
 * Enter an amount in cents: 92
 * 
 * You can provide this change as follows:
 * Dollars: 0
 * Quarters: 3
 * Dimes: 1
 * Nickels: 1
 * Pennies: 2
 */

#include <iostream>
using namespace std;

int main()
{
    int input_change {0};
    cout << "Enter an amount in cents: ";
    cin >> input_change;
    
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};
    
    // Dollars
    dollars = input_change/dollar_value;
    input_change = input_change%dollar_value;
    cout << "Dollars: " << dollars << endl;
    
    // Quarters
    quarters = input_change/quarter_value;
    input_change = input_change%quarter_value;
    cout << "Quarters: " << quarters << endl;
    
    // Dimes
    dimes = input_change/dime_value;
    input_change = input_change%dime_value;
    cout << "Dimes: " << dimes << endl;
    
    // Nickels
    nickels = input_change/nickel_value;
    input_change = input_change%nickel_value;
    cout << "Nickels: " << nickels << endl;
    
    // Pennies
    pennies = input_change/penny_value;
    input_change = input_change%penny_value;
    cout << "Pennies: " << pennies << endl;
    
    return 0;
}