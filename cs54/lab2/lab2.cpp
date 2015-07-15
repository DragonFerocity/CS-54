// Programmer: Ryan Andrews                 Date: January 28, 2014
// File: lab2-error.cpp                     Class: CS 54
// Purpose: To fix errors in a c++ file     Section: A

#include <iostream>
using namespace std;

int main()
{
  int multiplicand; // a in c = a * b
  int multiplier;  // b in c = a * b
  int product; // c in c = a * b
  
  // display brief welcome message
  cout << "I can do multiplication well!" << endl;
  
  // read multiplicand from keyboard
  cout << "Enter the multiplicand: ";
  cin >> multiplicand;
  
  // read multiplier from keyboard
  cout << "Enter the multiplier: ";
  cin >> multiplier;
  
  // perform multiplication as * operator
  product = multiplicand * multiplier;
  
  // display the result
  cout << multiplicand << " * " << multiplier << " = " << product << endl;
  
  return 0; 
}
