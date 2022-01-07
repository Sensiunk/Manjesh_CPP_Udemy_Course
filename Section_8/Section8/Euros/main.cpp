// Section 8
// Convert INR to USD

#include <iostream>
using namespace std;

int main()
{
    const double usd_per_inr {0.013};
    
    cout << "Welcome to the INR to USD converter" << endl;
    cout << "Enter the value in INR: ";
    
    double rupees {0.0};
    double dollars {0.0};
    
    cin >> rupees;
    dollars = rupees * usd_per_inr;
    
    cout << rupees << " rupees is equivalent to " << dollars << " dollars";
    
    return 0;
}