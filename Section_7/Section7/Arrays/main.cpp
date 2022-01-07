#include <iostream>
using namespace std;

int main()
{
    char vowels[] {'a','e','i','o','u'};
    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl << endl;
    
//    cin >> vowels[5]; // Out of bounds error

    double hi_temps [] {98.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;
    
    cout << "The first high temperatore is now: " << hi_temps[0] << endl << endl;
    
    int test_score[5] {100, 90, 80, 70, 60};
    cout << "First score at index 0: " << test_score[0] << endl;
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl << endl;
    
    cout << "Enter 5 test scores: ";
    cin >> test_score[0];
    cin >> test_score[1];
    cin >> test_score[2];
    cin >> test_score[3];
    cin >> test_score[4];
    
    cout << "\nThe new updated test score is:" << endl;
    cout << "First score at index 0: " << test_score[0] << endl;
    cout << "Second score at index 1: " << test_score[1] << endl;
    cout << "Third score at index 2: " << test_score[2] << endl;
    cout << "Fourth score at index 3: " << test_score[3] << endl;
    cout << "Fifth score at index 4: " << test_score[4] << endl << endl;
    
    cout << "Notice what the value of the array name is: " << test_score << endl;
    
    // Initializing multi-dimensional arrays
    int movie_rating [3][4] {{0, 4, 3, 5}, {2, 3, 3, 5}, {1, 4, 4, 5}};
    return 0;
}