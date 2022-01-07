#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaring
    //vector <char> vowels (5);
    //vector <int> test_scores (10);
    
    // Initializing
    //vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
    //vector <int> test_scores {100, 98, 89, 85, 93};
    //vector <double> hi_temperatures (365, 80.0); // Size of 365 with all values initialized to 80.0
    
//    vector <char> vowels; // Empty
//    vector <char> vowels (5); // Size 5 initialized to 0
    vector <char> vowels {'a','e','i','o','u'};
    
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;
    
//    vector <int> test_scores (3); // 3 elements all initialized to 0
//    vector <int> test_scores (3, 100); // 3 elements all initialized to 100
    vector <int> test_scores {100, 98, 89};
    
    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl << endl;
    
    cout << "Test scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;
    
    cout << "Enter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);
    
    cout << "Updated Test scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl << endl;
    
    cout << "Enter a test score to add to the vector: ";
    
    int score_to_add {0};
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "Enter another test score to add to the vector: ";
    
    cin >> score_to_add;
    
    test_scores.push_back(score_to_add);
    
    cout << "Updated Test scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl << endl;
    
    //cout << "This should cause an exception" << test_scores.at(10) << endl;
    
    // Example of a 2D-vector
    
    vector<vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    cout << "Here are the movie ratings for reviewwe #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl << endl;
    
    cout << "Here are the movie ratings for reviewer #1 using vector syntax:" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    //
    return 0;
    

}