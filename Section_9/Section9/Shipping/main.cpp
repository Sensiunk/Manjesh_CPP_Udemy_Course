/*
 * Section 9
 * Shipping
 * 
 * Shipping cost calculator
 * 
 * ASk the user for package dimensions in inches
 * length, width, height - these should be integers
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is greater than 500 cubic inches there is a 25% surcharge
 */
 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int length {}, width {}, height {};
    double base_cost {2.50};
    
    const int tier1_threshhold {100};
    const int tier2_threshhold {500};
    
    int max_dimension_length {10};
    
    double tier1_surcharge {0.10};
    double tier2_surcharge {0.25};
    
    // All dimensions must be 10 inches or less
    
    int package_volume {};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;
    
    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    }
    else 
    {
        double package_cost {};
        package_volume = length * width * height;
        
        package_cost = base_cost;
        
        if (package_volume > tier2_threshhold)
        {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        }
        else if (package_volume > tier1_threshhold)
        {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier 2 surcharge" << endl;
        }
        
        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
    }
    
    return 0;
}