//Ryan Andrews		Date: April 15, 2014
//Class: CS 54		Section: 3A

#ifndef MAILCLASS_H
#define MAILCLASS_H

#include <iostream>
using namespace std;

//This object describes an e-mail: It's reciever, subject, and message
class eMail
{
  public:
    //
    //
    //
    void writeEMail();
    //
    //
    //
    void printEMail();
    //
    //
    //
    void printMorseEMail();
  private:
    char m_SendTo[100]; //The person to send the email to
    char m_Subject[100]; //The subject of the email
    char m_Message[500]; //The message in the email
    char m_MorseMessage[500]; //The message in morse code
};

#endif
