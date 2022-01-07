#include <iostream>
using namespace std;

int main()
{
    char user_choice {};
    
    do 
    {
        cout << "---------------------------" << endl;
        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl << endl;
        
        cout << "Enter your selection: ";
        cin >> user_choice;
        
        switch (user_choice)
        {
            case '1':
                cout << "You chose 1 -- Doing this" << endl;
                break;
            case '2':
                cout << "You chose 2 -- Doing that" << endl;
                break;
            case '3':
                cout << "You chose 3 -- Doing something else" << endl;
                break;
            case 'q':
                cout << "Goodbye..." << endl;
                break;
            case 'Q':
                cout << "Goodbye..." << endl;
                break;
            default:
                cout << "Unknown option -- try again..." << endl;
        }
    } while (user_choice != 'q' && user_choice != 'Q');
    return 0;
}