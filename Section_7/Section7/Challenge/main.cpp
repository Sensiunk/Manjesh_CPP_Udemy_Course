/*
 * Section 7
 * Challenge
 * 
 * Write a C++ program as follows:
 * 
 * Declare 2 empty vecotrs of integers names
 * vector1 and vector2, respectively.
 * 
 * Add 10 and 20 to vector dynamically using push_back
 * Display the elements in vecotr1 using the at() method as well as its size using the size() method
 * 
 * Add 100 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 * 
 * Declare an empty 2D vector called vector_2d
 * Remember, that a 2D vector is a vector of vector<int>
 * 
 * Add vector1 to vector_2d dynamically using push_back
 * Add vector2 to vector_2d dynamically using push_back
 * 
 * Display the elements in vector_2d using the at() method
 * 
 * Change vector1.at(0) to 1000
 * 
 * Display the elements in vector_2d again using the at() method
 * 
 * Display the elements in vector1
 * 
 * What did you expect? Did you get what you expected? What do you think happened?
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1 {};
    vector<int> vector2 {};
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " << vector1.size() << endl << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << "The size of vector 2 is: " << vector2.size() << endl << endl;
    
    vector<vector<int>> vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "The contents of vector1 in the 2d vector is: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl << endl;
    
    cout << "The contents of vector2 in the 2d vector is: " << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl << endl;
    
    vector1.at(0) = 1000;
    
    cout << "The contents of vector1 in the 2d vector is: " << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl << endl;
    
    cout << "The contents of vector2 in the 2d vector is: " << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " << vector1.size() << endl << endl;
    
    return 0;
}