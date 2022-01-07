/*
 * Section 10
 * Challenge - Substrution Cipher
 * 
 * A simple and very old emthod of sending secret messages is the substitution cipher.
 * You migh have used this cipher with your friends when you were a kid.
 * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
 * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc
 * 
 * Write a program that asks a user to enter a secret message
 * 
 * Encrypt this message using the substituion cypher and display the encrypted message.
 * Then decrypt the encrypted message back to the original message.
 * 
 * You may use the 2 strings below for you subsititions
 * For example, to encrypt you can replace the character at position n in alphabet
 * with the character at position n in key.
 * 
 * To decrypt, you can replace the character at position n in key with the character at position n in alphabet
 * 
 * Have fun! And make the cipher stronger if you wish!
 * Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespaces and so 
 * forth. Also currently the cipher always substitutes a lowwercase letter with an uppercase letter and vice-versa.
 * This could be improved
 * 
 * Remember, the less code you write, the less code you have to test!
 * Reuse existing functionality in libraries and in the std::string class!
 */
 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string my_string {};
    string encrypted_string {};
    string decrypted_string {};
    cout << "Enter your secret message: ";
    getline(cin, my_string);
    
    cout << "\nEncrypting message..." << endl << endl;
    
    for (auto character : my_string)
    {
        size_t position = alphabet.find(character);
        if (position != string::npos)
        {
            char new_char {key.at(position)};
            encrypted_string += new_char;
        }
        else
        {
            encrypted_string += character;
        }
        
    }
    
    cout << "Encrypted message: " << encrypted_string << endl << endl;
    
    cout << "Decrypting message..." << endl << endl;
    
    for (auto character : encrypted_string)
    {
        size_t position = key.find(character);
        if (position != string::npos)
        {
            char new_char {alphabet.at(position)};
            decrypted_string += new_char;
        }
        else
        {
            decrypted_string += character;
        }
        
    }
    
    cout << "Decrypted message: " << decrypted_string << endl << endl;
    
    return 0;
}