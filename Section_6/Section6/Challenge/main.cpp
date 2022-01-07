#include <iostream>
using namespace std;

/*
 * Manjesh's Carpet Cleaning Service
 * Charges:
 *  $25 per small room
 *  $35 per large room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of small and large rooms that would like cleaned
 * and provide an estimate such as:
 * 
 * Estimate for carpet cleaning service
 * Number of small rooms: 3
 * Number of large rooms: 1
 * Price per small room: $25
 * Price per large room: $35
 * Cost: $110
 * Tax: $6.6
 * 
 * Total estimate: $116.6
 * This estimate is valid for 30 days
 */

int main()
{
    cout << "Estimate for carpet cleaning service" << endl;
    
    cout << "Number of small rooms: ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    
    cout << "Number of large rooms: ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    const double price_of_small_room {25};
    const double price_of_large_room {35};
    
    const double tax_rate {0.06};
    const int expire_date {30};
    
    cout << "Price per small room: $" << price_of_small_room << endl;
    cout << "Price per large room: $" << price_of_large_room << endl;
    cout << "Cost: $" << price_of_small_room * number_of_small_rooms + price_of_large_room * number_of_large_rooms << endl;
    cout << "Tax: $" << price_of_small_room * number_of_small_rooms * tax_rate + price_of_large_room * number_of_large_rooms * tax_rate << endl << endl;
    
    cout << "Total estimate: $" << (price_of_small_room * number_of_small_rooms * tax_rate + price_of_large_room * number_of_large_rooms * tax_rate) + (price_of_small_room * number_of_small_rooms + price_of_large_room * number_of_large_rooms) << endl;
    cout << "This estimate is valid for " << expire_date << " days" << endl;
    
    return 0;
}