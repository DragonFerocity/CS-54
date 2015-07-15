//Ryan Andrews		Date: February 25, 2014
//Class: CS 54		Secion: 3A
//File: lab6.cpp
//Purpose: To let Jim obsess over a number

#include <iostream>
using namespace std;

void display_welcome();
int get_obsession();
float compute_obsessibility(int obsession);
void write_on_walls(int obsesion);
void display_goodbye();


int main()
{
  int ObsessionNum; //The number Jim wants to obsess about
  
  display_welcome();
  ObsessionNum = get_obsession();
  compute_obsessibility(ObsessionNum);
  write_on_walls(ObsessionNum);
  display_goodbye();

  return 0;
}

void display_welcome()
{
  cout << "Welcome to the Obsesion Finder Tool!" << endl;

  return;
}

int get_obsession()
{
  int Obsession; //The number that Jim wants to obsess about
  
  cout << endl << "What number would you like to obsess about?  ";
  cin >> Obsession;
  
  return Obsession;
}

float compute_obsessibility(int obsession)
{
  float ObsessibilityFactor; //The obsession a number has
  
  ObsessibilityFactor = (obsession % 5)/static_cast<float>(obsession - 7);
  
  cout << endl << "The obsessibility factor of " << obsession << " is "
       << ObsessibilityFactor << "." << endl;
  
  return 0;
}

void write_on_walls(int obsession)
{
  const int WriteOnWalls = 53; 
  //number of times to write the obsession number on the walls
  int j = 0; //Used to add line breaks after printing the number 12 times
  
  cout << endl << "Here's what it will look like on your walls:\n" << endl;
  
  for (int i = 0; i < WriteOnWalls; i++)
  {
    j++;
    cout << obsession << " ";
    if (j >= 12)
    {
      cout << endl;
      j = 0;
    }
  }
  
  return;
}

void display_goodbye()
{
  cout << "\n\nThank you for using the Obsession Finder Tool." << endl
       << "Have a nice day!" << endl << endl;

  return;
}
