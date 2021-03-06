//Ryan Andrews		Date: February 18, 2014
//File name: Lab5.cpp
//Purpose: Big Kahuna Point of Sale system

#include <iostream>
using namespace std;

int main()
{
  const float CHEESEBURGER = 3.45, FRIES = 0.87, ORANGE_SODA = 2.13;
  const float BIG_KAHUNA = 6.99, BUCKET_O_NACHOS = 5.01, COFFEE = 2.03;
  //The price of each item that is for sale by Big Kahuna
  int Item;
  //The item that the user wants to buy
  float TotalPrice;
  //The total price of every item the user has selected to buy
  
  
  //			MENU			//
  cout << "Welcome to the Big Kahuna POS!" << endl << endl;
  
  cout << "Item                | Price" << endl;
  cout << "--------------------|------" << endl;
  cout << "1. Cheeseburger     | $" << CHEESEBURGER << endl;
  cout << "2. Fries            | $" << FRIES << endl;
  cout << "3. Orange Soda      | $" << ORANGE_SODA << endl;
  cout << "4. Big Kahuna       | $" << BIG_KAHUNA << endl;
  cout << "5. Bucket o' Nachos | $" << BUCKET_O_NACHOS << endl;
  cout << "6. Coffee           | $" << COFFEE << endl;
  
  cout << endl << "Please order 3 items:  " << endl;
  
  //			USER INPUT		//
  for (int i = 0; i < 3; i++)
  {
    cout << "\tItem " << i << ": ";
    cin >> Item;
    
    switch (Item)
    {
      case 1: TotalPrice += CHEESEBURGER; break;
      case 2: TotalPrice += FRIES; break;
      case 3: TotalPrice += ORANGE_SODA; break;
      case 4: TotalPrice += BIG_KAHUNA; break;
      case 5: TotalPrice += BUCKET_O_NACHOS; break;
      case 6: TotalPrice += COFFEE; break;
      default: TotalPrice += 0;
    }
  }
  
  cout << endl << "Your total today is: $" << TotalPrice << endl;
  cout << "Thank you, please come again!" << endl << endl;
  
  return 0;
}
