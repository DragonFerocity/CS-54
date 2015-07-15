//Ryan Andrews		Date: March 18, 2014
//Class: CS 54		Section: 3A
//File: lab9.cpp
//Purpose:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct door
{
  string m_PrizeName;
  int m_PrizeDoor;
  float m_PrizeValue;
};

//
//
//
void DisplayWelcome();
//
//
//
door DoorGameCreatePrize();
//
//
//
int GetDoorChoice();
//
//
//
int PickAnotherDoor(int Choice, door & WinningDoor);
//
//
//
int PrintResult(int DoorChoice, door & WinningDoor);
//
//
//
void DisplayGoodbye();

int main()
{
  srand(time(NULL));
  door WinningDoor;
  int DoorChoice;
  
  DisplayWelcome();
  WinningDoor = DoorGameCreatePrize();
  DoorChoice = GetDoorChoice();
  if (DoorChoice != WinningDoor.m_PrizeDoor)
    DoorChoice = PickAnotherDoor(DoorChoice, WinningDoor);
  PrintResult(DoorChoice, WinningDoor);
  DisplayGoodbye();
   
  return 0;
}

void DisplayWelcome()
{
  cout << "Are you ready to play \"What's behind the door?\"?" << endl;
  
  return;
}

door DoorGameCreatePrize()
{
  string PrizeName;
  float PrizeValue;
  int Door;
  door WinningDoor;
  
  cout << "\nWhat would you like to win?  ";
  cin >> PrizeName;
  
  cout << "How much does it cost?  $";
  cin >> PrizeValue;
  
  Door = (rand()%3)+1;
  
  WinningDoor.m_PrizeName = PrizeName;
  WinningDoor.m_PrizeValue = PrizeValue;
  WinningDoor.m_PrizeDoor = Door;
  
  return WinningDoor;
}

int GetDoorChoice()
{
  int DoorChoice;
  
  cout << "\nWhich door would you like to open?  ";
  cin >> DoorChoice;
  
  return DoorChoice;
}

int PickAnotherDoor(int DoorChoice, door & WinningDoor)
{
  int NextDoorChoice = DoorChoice, NewDoorChoice_Num;
  char NewDoorChoice;
  int DoorWin = WinningDoor.m_PrizeDoor;
  
  while(NewDoorChoice == DoorChoice && NewDoorChoice)
  {
    NextDoorChoice = (rand()%3)+1;
    while(NewDoorChoice == WinningDoor.m_PrizeDoor)
      NextDoorChoice = (rand()%3)+1;
  }
  
  cout << "\nOoh, I'm sorry, it's not behind door #" << NextDoorChoice << endl;
  cout << "Would you like to switch to Door #" << DoorWin
       << "(y)\nor Would you like to open #" 
       << DoorChoice << "(n)?  ";
  cin >> NewDoorChoice;

  if (NewDoorChoice == 'y')
    NewDoorChoice_Num = DoorWin;
  else
    NewDoorChoice_Num = DoorChoice;

  return NewDoorChoice_Num;
}

int PrintResult(int DoorChoice, door & WinningDoor)
{
  if (DoorChoice == WinningDoor.m_PrizeDoor)
    cout << "\nCongratulations! It was behind door #" << DoorChoice << endl;
  else
    cout << "\nOoh, I'm sorry, it was behind door #"
         << WinningDoor.m_PrizeDoor << endl;
  
  return 0;
}

void DisplayGoodbye()
{
  cout << "\nSee you later!" << endl;
  
  return;
}
