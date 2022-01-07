// Section 6
// Primitive Types

#include <iostream>

using namespace std;

int main()
{
    /************************************
    * Character Type
    ************************************/
    char middle_initial {'j'}; // Notice the single quotes around the characters
    cout << "My middle initial is " << middle_initial << endl;
    
    /************************************
    * Integer Types
    ************************************/
    unsigned short int exam_score {55}; // Same as unsigned short exam_score {55};
    cout << "My exam score was " << exam_score << endl;
    
    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represent in my meeting" << endl;
    
    long people_in_washington {7615000};
    cout << "There are about " << people_in_washington << " in the state of Washington" << endl;
    
    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;
    
    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;
    
    /************************************
    * Floating point Types
    ************************************/
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    long double large_amount {2.7e120};
    cout << large_amount << " is a very big number" << endl;
    
    /************************************
    * Boolean Type
    ************************************/
     
    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;
    
    /************************************
    * Overflow Example
    ************************************/
    
    short value1 {30000};
    short value2 {2000};
    //short product {value1 * value2};
    int product {value1 * value2};
    
    cout << "The product of " << value1 << " and " << value2 << " is " << product << endl;
    
    return 0;
}