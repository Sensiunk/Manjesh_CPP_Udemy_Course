// Section 12
// Pointer Arithmetic

#include <iostream>
using namespace std;

int main()
{
    int scores [] {100, 95, 89, 68, -1};
    int *score_ptr {scores};
    
    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "\n---------------------" << endl;
    score_ptr = scores;
    while (*score_ptr != -1)
        cout << *score_ptr++ << endl;
        
    cout << "\n---------------------" << endl;
    string s1 {"Manjesh"};
    string s2 {"Manjesh"};
    string s3 {"Pika"};
    
    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};
    
    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;
    
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;
    
    p3 = &s3;
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;
    
    cout << "\n---------------------" << endl;
    char name [] {"Manjesh"};
    
    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};
    
    char_ptr1 = &name[0];   // M
    char_ptr2 = &name[3];   // j
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    cout << "In the alphabet " << *char_ptr2 << " is " << (*char_ptr2 - *char_ptr1) << " characters away from " << *char_ptr1 << endl;
    
    cout << "\n---------------------" << endl;
    int numbers [] {1, 5, 6, 9, 2};
    
    int *int_ptr1 {nullptr};
    int *int_ptr2 {nullptr};
    
    int_ptr1 = &numbers[0];   // 1
    int_ptr2 = &numbers[3];   // 9
    
    cout << "In the array " << numbers << ", " << *int_ptr2 << " is " << (int_ptr2 - int_ptr1) << " places away from " << *int_ptr1 << endl;
    
    cout << "In the number line " << *int_ptr2 << " is " << (*int_ptr2 - *int_ptr1) << " places away from " << *int_ptr1 << endl;

    return 0;
}