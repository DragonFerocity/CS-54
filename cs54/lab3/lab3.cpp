//Ryan Andrews		Date: 2/04/14
//Class: CS 54		Section: 3A
//Filename: lab3.cpp
//Purpose: To find the number of cats produced after 'x' number of days

#include <iostream>
using namespace std;

int main()
{
  const float CAT_PRODUCTION_FACTOR = 9.0/5, CAT_AREA = 1.25;
  const float STUDIO_APPT = 512.0;
  //CAT_PRODUCTION_FACTOR is the rate that cats reproduce at
  //CAT_AREA is the number of cubic feet one cat takes up
  //STUDIO_APPT is the number of cubic feet of John's appartment
  float ApptPercent;
  //ApptPercent is the percent of the appartment filled with cats;
  unsigned int d, NumCats;
  //d is the number of days
  //NumCats is the number of cats after d days
  bool Compatible;
  //Compatible is whether the cats are compatible or not.
  
  /*			User Input			*/
  cout << "Welcome to the Catsplosion Calculator!" << endl << endl;
  cout << "  Are your cats compatible? (1: yes, 0: no):  ";
  cin >> Compatible;
  cout << "  How many days will you have the cat's for?  ";
  cin >> d;
  
  /*			  Output			*/
  NumCats = ((CAT_PRODUCTION_FACTOR*(d*d))*Compatible)+2;
  ApptPercent = ((NumCats*CAT_AREA)/STUDIO_APPT)*100;
  cout << endl;
  cout << "There will be " << NumCats << " cats in your appartment.";
  cout << endl << "The appartment will be " << ApptPercent << "% cats.";
  cout << endl << endl << "Have fun with your cats. See you later.";
  cout << endl;
  
  return 0;
}
