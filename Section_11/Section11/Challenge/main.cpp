/*
 * Section 9
 * Challenge
 * 
 * This challenge is about using a collection (list) of integers and allowing the user
 * to seelct options from a menu to perform operations to the list.
 * 
 * Your program should display a menu options to the user as follows:
 * 
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smallest number
 * L - Display the largest number
 * Q - Quit
 * 
 * Enter your choice:
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be 
 * displayed again
 * 
 * If the user enters 'P' or 'p', you should display all the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty"
 * If the list is not empty then all the elements should be displayed inside square brackets separated by a space.
 * For example, [ 1 2 3 4 5 ]
 * 
 * If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
 * which you will add to the list and then display it was added, for example, if the user enters 5
 * You should display, "5 added".
 * Duplicate list entries are OK
 * 
 * If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 * 
 * If the user enters 'S' or 's' you should display the smallest element in the list.
 * For example, if the list contains [2 4 5 1 ], you should display, "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 * 
 * If the user enters 'L' or 'l' you should display the largest element in the list.
 * For example, if the list contains [2 4 5 1 ], you should display, "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 * 
 * If the user enters 'Q' or 'q' then you should display 'Goodbye' andthe program should terminate
 * 
 * Before you begin. Write out the steps you need to take and decide in what order they should be done.
 * Think about what loops you should use as well as wheat you will use for your selection logic.
 * 
 * This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!
 * 
 * Finally, be sure to test your program as you go and at the end.
 * 
 * Hint: Use a vector!
 */

#include <iostream>
#include <vector>
using namespace std;

void display_menu(char &user_choice);

void print_vector(const vector<int> &data_entry);

void add_integer(vector<int> &data_entry);

void calculate_mean(const vector<int> data_entry);

void calculate_smallest(const vector<int> data_entry);

void calculate_largest(const vector<int> data_entry);

void find_int(const vector<int> &data_entry);

int main()
{
    char user_choice {};
    vector<int> data_entry {};
    
    do
    {
        display_menu(user_choice);
        switch (user_choice)
        {
            case 'p':
            case 'P':
                print_vector(data_entry);
                break;
            case 'a':
            case 'A':
                add_integer(data_entry);
                break;
            case 'm':
            case 'M':
                calculate_mean(data_entry);
                break;
            case 's':
            case 'S':
                calculate_smallest(data_entry);
                break;
            case 'l':
            case 'L':
                calculate_largest(data_entry);
                break;
            case 'f':
            case 'F':
                find_int(data_entry);
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye";
                break;
            default:
                cout << "Unknown selection, please try again" << endl;
                break;
        }
    } while (user_choice != 'q' && user_choice != 'Q');
    return 0;
}

void display_menu(char &user_choice)
{
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "F - Find a number within the list" << endl;
    cout << "Q - Quit" << endl << endl;
    cout << "Enter your choice: ";
    cin >> user_choice;
}

void print_vector(const vector<int> &data_entry)
{
    if (data_entry.size() == 0)
    {
        cout << "[] - the list is empty" << endl;
    }
    else
    {
        cout << "[ ";
        for (auto val : data_entry)
            cout << val << " "; 
        cout << "]" << endl;
    }
}

void add_integer(vector<int> &data_entry)
{
    int input {};
    
    cout << "Enter the number you would like to add: ";
    cin >> input;
            
    data_entry.push_back(input);
                
    cout << input << " added" << endl;
}

void calculate_mean(const vector<int> data_entry)
{
    int sum {};
    double mean {};
    
    if (data_entry.size() == 0)
    {
        cout << "Unable to calculate the mean - no data" << endl;
    }
    else
    {
        for (auto val : data_entry)
            sum += val;
        mean = (double)sum / data_entry.size();
        cout << "The mean is: " << mean << endl;
    }
}

void calculate_smallest(const vector<int> data_entry)
{
    int smallest {};
    if (data_entry.size() == 0)
    {
        cout << "Unable to calculate the smallest number - list is empty" << endl;
    }
    else
    {
        smallest = data_entry.at(0);
        for (auto val : data_entry)
            if (val < smallest)
                smallest = val;
        cout << "The smallest number is: " << smallest << endl << endl;;
    }
}

void calculate_largest(const vector<int> data_entry)
{
    int largest {};
    if (data_entry.size() == 0)
    {
        cout << "Unable to calculate the largest number - list is empty" << endl;
    }
    else
    {
        largest = data_entry.at(0);
        for (auto val : data_entry)
            if (val > largest)
                largest = val;
        cout << "The largest number is: " << largest << endl << endl;;
    }
}

void find_int(const vector<int> &data_entry)
{
    int target {};
    cout << "What is the number you are looking for?: " << endl;
    cin >> target;
    
    bool checker {false};
    for (auto v : data_entry)
        if (v == target)
            checker = true;
    if (checker == true)
        cout << "The number: " << target << " was found in the list" << endl;
    else
    {
        cout << "Sorry but, " << target << " is not in the list" << endl;
    }
}