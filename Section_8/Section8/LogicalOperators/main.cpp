#include <iostream>
using namespace std;

int main()
{
    int num {};
    const int lower {10};
    const int upper {20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between two other integers
    // Assume lower < upper
    
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << endl;
    cin >> num;
    
    bool within_bounds {false};
    
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // Determine if an entered integer is outside two other integers
    // Assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " or " << upper << endl;
    cin >> num;
    
    bool between_bounds {false};
    
    between_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << between_bounds << endl;
    
    // Determine if an entered integer is outside two other integers
    // Assume lower < upper
    cout << "Enter an integer - the bounds are " << lower << " on " << upper << endl;
    cin >> num;
    
    bool on_bounds {false};
    
    on_bounds = (num == lower || num == upper);
    cout << num << " is outside " << lower << " and " << upper << ": " << on_bounds << endl;
    
    // Determine when you need to wear a coat based on temperature and wind speed
    bool wear_coat {false};
    double temperature {};
    int wind_speed {};
    
    const int wind_speed_for_coat {25};
    const double temperature_for_coat {45};
    
    // Require a coat if either wind is too high OR temperature is too low
    cout << "Enter the current temperature in (F): ";
    cin >> temperature;
    cout << "Enter the current windspeed in (MPH): ";
    cin >> wind_speed;
    
    // Require a coat if either the temperature is too low or if the wind speed is too high
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;
    
    // Require a coat if both the temperature is too low and if the wind speed is too high
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;
    
    return 0;
}