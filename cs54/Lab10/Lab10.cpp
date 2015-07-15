//Ryan Andrews		Date: 4/1/14
//Class: CS 54		Section: 3A
//File: Lab10.cpp
//Purpose: A program to encrypt or decrypt messages

#include <iostream>
#include <cstring>
using namespace std;

//Displays a welcome message to the screen
//Pre: None
//Post: Outputs a welcome message
void display_welcome();
//Prompts the user to enter a cryptographic key
//Pre: None
//Post: Returns the value entered by the user
int get_key();
//Encrypts a single character
//Pre: Sent date must be a character
//Post: Returns the character as encrpyted information
char encrypt_character(char C, int Key);
//Encrypts the string that the user enters
//Pre: Message must contain nothing but letters
//Post: Returns the encrypted Message
void encrypt_cstring(char Message[], int Key);
//Displays a goodbye message to the user
//Pre: None
//Post: Outputs a goodbye message
void display_goodbye();

int main()
{
  char Message[256];
  int Key;
  //Key: the number of spaces to shift each letter in the alphabet
    
  display_welcome();
  Key = get_key();
  
  cout << "Enter your message below: " << endl;
  cin.ignore();
  cin.getline(Message,256);
  
  encrypt_cstring(Message, Key);
  
  cout << "\nYour encrypted message is: " << endl;
  cout << Message << endl;
  cout << endl << strlen(Message) << " characters long." << endl;
  
  display_goodbye();
  
  return 0;
}

void display_welcome()
{
  cout << "Welcome to the message encrypter/decrypter program.\n" << endl;
  
  return;
}

int get_key()
{
  int Key;
  cout << "Please enter a key:  ";
  cin >> Key;
  
  return Key;
}

char encrypt_character(char C, int Key)
{
  if (C >= 'A' && C <= 'Z')
  {
    C += Key;
    if (C > 'Z')
      C -= 26;
    else if (C < 'A')
      C += 26;
  }
  if (C >= 'a' && C <= 'z')
  {
    C += Key;
    if (C > 'z')
      C -= 26;
    else if (C < 'a')
      C += 26;
  }
                              
  return C;
}

void encrypt_cstring(char Message[], int Key)
{
  int Length = strlen(Message);
  for (int i = 0; i < Length; i++)
  {
    Message[i] = encrypt_character(Message[i], Key);
  }
}

void display_goodbye()
{
  cout << "\n\nHave a nice day!" << endl;

  return;
}
