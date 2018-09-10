//File Name: encryption.cpp
//Author: Patricia Shatz
//Assignment Number 11
//Description: Create an encryption program that accepts sentences of no more than 20 characters
//or a key(Formula) and will undo the encryption

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>


using namespace std;

//function to encrypt a message
char encrypt(char input, int key)
{ 
    return input + key;
}   

// function to decrypt a message
char decrypt(char input, int key) 
{

    return input - key;
}


	
int main()
{
    
    string message;  

    cout << "Enter a message:" << endl;
    getline(cin, message);

    //returns a copy of the current message string, starting at index 0 
    //and continuing for 20 characters at the most
    message = message.substr(0, 20);


    //the for loop reads through the 20 characters and encrypts them
    for(int i = 0; i < message.length(); i ++)
    {
        // message[i] represents 1 character
         message[i] = encrypt(message[i], 20);

    }   

     cout << message << endl;

     //the for loop reads through the 20 characters and decrypts the message

    for(int i = 0; i < message.length(); i ++)
    {
                    
         message[i] = decrypt(message[i], 20);
    }  

     cout << message << endl;

    return 0;
}






















