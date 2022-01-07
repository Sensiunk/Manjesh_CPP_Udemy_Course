#include <iostream>
using namespace std;

int main()
{
    int num {};
    
    const int min {10};
    const int max {100};
    
    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;
    
    if (num >= min)
    {
        cout << "-------------- IF Statement 1 ---------------" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff {num - min};
        cout << num << " is " << diff << " greater than " << min << endl << endl;
    }
    
    if (num <= max)
    {
        cout << "-------------- IF Statement 2 ---------------" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff {max - num};
        cout << num << " is " << diff << " less than " << max << endl << endl;
    }
    
    if (num >= min && num <= max)
    {
        cout << "-------------- IF Statement 3 ---------------" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statements 1 and 2 must also display!!" << endl << endl;
    }
    
    if (num == min || num == max)
    {
        cout << "-------------- IF Statement 4 ---------------" << endl;
        cout << num << " is right on a boundry" << endl;
        cout << "This means all 4 statements display" << endl;
    }
    return 0;
}