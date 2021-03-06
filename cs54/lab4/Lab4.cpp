//Ryan Andrews		Date: February 11, 2014
//Class: cs54		Section: 3A
//Filename: Lab4.cpp
//Purpose: To save billions of dollars on bananas.

#include <iostream>
using namespace std;

int main()
{
  const int JUMPING_MONKEYS = 5;
    //Number of monkeys jumping on the bed.
  const float MEDICAL_BILL_1 = 140.32; 
    //Cost per head if 2 or less monkeys are hurt.
  const float MEDICAL_BILL_2 = 100.00;
    //Cost per head if more than 2 monkeys are hurt.
  int MonkeysOnBed = JUMPING_MONKEYS, MonkeysHurt = 0;
  char Continue;
    //Whether or not to continue the simulation. (y/n)
  float MedicalBill;
    
  cout << "Welcome to the Jumping Monkey on the Bed simulation!" << endl;
  cout << endl;
  
  do
  {
    cout << "There are " << MonkeysOnBed << " monkeys jumping on the bed. ";
    cout << "One fell off and bumped his head!" << endl;
    cout << "Should the monkeys continue to jump on the bed (y/n)?";
    cin >> Continue;
    MonkeysOnBed -= 1;
    cout << endl;
  }
  while (Continue == 'y' && MonkeysOnBed > 0);
  
  MonkeysHurt = JUMPING_MONKEYS-MonkeysOnBed;
  
  cout << MonkeysHurt << " Monkeys bumped their heads! ";
  if (MonkeysHurt <= 2)
    MedicalBill = static_cast<float>(MEDICAL_BILL_1*MonkeysHurt);
  else
    MedicalBill = static_cast<float>(MEDICAL_BILL_2*MonkeysHurt);
  cout << "The total medical bill is $" << MedicalBill;
  cout << endl << "Thank for using this simulation. Have a nice day!";
  cout << endl;
  
  return 0;
}
