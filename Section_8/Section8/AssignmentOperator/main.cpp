#include <iostream>
using namespace std;

int main()
{
    int num1 {10};
    int num2 {20};
    
    //num1 = 100;
    //num1 = num2;
    num1 = num2 = 1000;
    
    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;
    return 0;
}