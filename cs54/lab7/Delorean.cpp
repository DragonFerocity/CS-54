//Ryan Andrews		Date: March 3, 2014
//Class: CS 54		Section: 3A
//File: lab7.cpp
//Purpose: To make multiple files for 1 program

#include <iostream>
#include "Delorean.h"
using namespace std;

void displayWelcome()
{
  cout << "Welcome to the Flux computation program!" << endl;
  
  return;
}

void getTimeWarp(int & Year, int & Month, int & Day)
{
  cout << "\nPlease enter the date you wish to warp to: " << endl;
  cout << "   Year:         ";
  cin >> Year;
  cout << "   Month (1-12): ";
  cin >> Month;
  cout << "   Day (1-31):   ";
  cin >> Day;
  
  return;
}

float computeFlux(int Year, int Month, int Day)
{
  const float DIALATION_CONSTANT = 1.31233*(10*10*10*10*10);
  float FluxAmt;
  
  FluxAmt = (DIALATION_CONSTANT)*((Month%Day)/static_cast<float>(Year));
    
  return FluxAmt;
}

void displayGoodbye()
{
  cout << "Thank you for using the Flux Computation program!"
       << "Have a nice trip!" << endl;
  
  return;
}
