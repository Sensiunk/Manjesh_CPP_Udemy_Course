#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};                 // Apple
    string s6 {s1, 0, 3};           // App
    string s7 (10, 'X');            // XXXXXXXXXX
    
    cout << s0 << endl;             // No garbage
    cout << s0.length() << endl;    // Empty string
    
    // Initialization
    cout << "Initialization" << endl << "----------------------------------" << endl;
    cout << "s1 is initialized to: " << s1 << endl;
    cout << "s2 is initialized to: " << s2 << endl;
    cout << "s3 is initialized to: " << s3 << endl;
    cout << "s4 is initialized to: " << s4 << endl;
    cout << "s5 is initialized to: " << s5 << endl;
    cout << "s6 is initialized to: " << s6 << endl;
    cout << "s7 is initialized to: " << s7 << endl << endl;
    
    // Comparison
    cout << "Comparison" << endl << "----------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;               // True     Apple == Apple
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;               // False    Apple != Banana
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;               // True     Apple != Banana
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;                 // True     Apple < Banana
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;                 // True     Banana > Apple
    cout << s4 << " < " << s5 << ": " << (s1 < s5) << endl;                 // False    apple > Apple
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl << endl;     // True     Apple == Apple
    
    // Assignment
    cout << "Assignment" << endl << "----------------------------------" << endl;
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;    // Watermelon
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;    // Watermelon
    
    s3 = "Manjesh";
    cout << "s3 is now: " << s3 << endl;    // Manjesh
    
    s3[0] = 'C';
    cout << "s3 change first letter to 'C': " << s3 << endl;    // Canjesh
    s3.at(0) = 'B';
    cout << "s3 change first letter to 'P': " << s3 << endl << endl;    // Banjesh
    
    // Concatentation
    cout << "Concatentation" << endl << "----------------------------------" << endl;
    s3 = "Watermelon";
    
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl << endl;    // Apple and Banana juice
    
    // for loop
    cout << "for loop" << endl << "----------------------------------" << endl;
    s1 = "Apple";
    for (size_t i{0}; i < s1.length(); ++i)
        cout << s1.at(i);
    cout << endl << endl;
    
    // Range-based for loop
    cout << "Range-based for loop" << endl << "----------------------------------" << endl;
    for (auto i : s1)
        cout << i;
    cout << endl << endl;
    
    // Substring
    cout << "Substring" << endl << "----------------------------------" << endl;
    s1 = "This is a test";
    
    cout << s1.substr(0, 4) << endl;    // This
    cout << s1.substr(5, 2) << endl;    // is
    cout << s1.substr(10, 4) << endl;   // test
    
    // Erase
    cout << "Comparison" << endl << "----------------------------------" << endl;
    
    s1 = "This is a test";
    s1.erase(0, 5);     // Erase This from s1 results in "is a test"
    cout << "s1 is now: " << s1 << endl;    // is a test
    
    // getline
    cout << "getline" << endl << "----------------------------------" << endl;
    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);
    
    cout << "Your full name is " << full_name << endl << endl;
    
    // Find
    cout << "Find" << endl << "----------------------------------" << endl;
    
    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;
    
    return 0;
}