#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pyramid_string {};
    cout << "Enter the string you would like used in the pyramid: ";
    getline(cin, pyramid_string);
    
    size_t length = pyramid_string.size();
    size_t space_length = length + 1;
    
    for (int i{0}; i < length + 1; ++i)
    {
        for (int a = space_length - 1; a > 0; --a)
            cout << " ";
        --space_length;
        
        for (int j{0}; j < i; ++j)
        {
            cout << pyramid_string.at(j);
        }
        
        for (int j = i - 1; j > 0; --j)
        {
            cout << pyramid_string.at(j - 1);
        }
        
        cout << endl;
    }
    
    return 0;
}