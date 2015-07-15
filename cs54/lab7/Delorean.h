#ifndef DELOREAN_H
#define DELOREAN_H
#include <iostream>
using namespace std;


//Displays a greeting to the user
//Pre: none
//Post: none
void displayWelcome();
//Asks the user to input a day, a month, and a year to travel to
//Pre: none
//Post: none
void getTimeWarp(int & Year, int & Month, int & Day);
//Computes the flux based on the passed Year, Month, and Day
//Pre: none
//Post: will return the value of the calculated Flux
float computeFlux(int Year, int Month, int Day);
//Displays a goodbye message to the user
//Pre: none
//Post: none
void displayGoodbye();

#endif
