//Ryan Andrews		Date: April 15, 2014
//Class: CS 54		Section: 3A

#include <iostream>
#include "MailClass.h"
using namespace std;

int main()
{
  char InMorse;
  eMail Mail;
  
  Mail.writeEMail();
  cout << "\nWould you like your email in Morse Code (y/n)?  ";
  cin >> InMorse;
  
  if (InMorse == 'y')
    Mail.printMorseEMail();
  else
    Mail.printEMail();
  
  return 0;
}
