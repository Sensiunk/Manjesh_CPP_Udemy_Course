#include <iostream>
using namespace std;

/*
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * Tax: $3.6
 * 
 * Total Estimate: $63.6
 * This estimate is valid for 30 days
 * 
 * Psuedocode:
 * Prompt the use to enter the number of rooms
 * Display the number of rooms
 * Display price per room
 * 
 * Display cost: (Number of rooms * price per room)
 * Display tax: (Number of rooms * price per room * tax rate)
 * Display total estimate: (Number of rooms * price per room) + (Number of rooms * price per room * tax rate)
 */

int main()
{
    cout << "Hello, welcome to Manjesh's Carpet Cleaning Service" << endl << endl;
    cout << "How many rooms would you like cleaned? ";
    
    int number_of_rooms {0};
    cin >> number_of_rooms;
    
    const double price_per_room {30};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << number_of_rooms * price_per_room << endl;
    cout << "Tax: $" << number_of_rooms * price_per_room * sales_tax << endl;
    cout << "Total Estimate: $" << number_of_rooms * price_per_room + number_of_rooms * price_per_room * sales_tax << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    return 0;
}