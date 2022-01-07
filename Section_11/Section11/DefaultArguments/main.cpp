// Section 11
// Default Arguments

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double calc_cost(double base_cost = 100, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix << " " << name << " " << suffix << endl;
}

int main()
{
    double cost {0};
    cost = calc_cost(100.0, 0.08, 4.25);    // Will use no defaults 100 + 8 + 4.25
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;    // 112.25
    
    cost = calc_cost(100.0, 0.08);          // Will use the default shipping 100 + 8 + 3.50
    cout << "Cost is: " << cost << endl;    // 111.50
    
    cost = calc_cost(200.0);
    cout << "Cost is: " << cost << endl;    // 215.50
    
    cost = calc_cost();
    cout << "Cost is: " << cost << endl;    // 109.50
    
    greeting("Manjesh Puram", "Dr.", "M.D.");
    greeting("Pika Puram", "Mrs.");
    greeting("Venkat Puram");
    
    return 0;
}