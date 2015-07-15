//Ryan Andrews		Date: 3/11/14
//Class: CS 54		Section: 3A
//File: Lab8.cpp
//Purpose:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Displays a welcome message to the user
//Pre: none
//Post: none
void display_welcome();
//Prints out a date to the user
//Pre: none
//Post: Will always output the date 4/1/2061
void print_date();
//Prints out a date to the user
//Pre: none
//Post: none
void print_date(int Year, int Month, int Day);
//Prints out a random name to the user from a list of 6 First and Last names
//Pre: none
//Post: none
void print_random_name();
//Prints out a random job from a list of 6 jobs to the user
//Pre: none
//Post: none
void print_random_job();
//Prints out a random birthdate to the user
//Pre: none
//Post: none
void print_random_date();
//Displays a goodbye message to the user
//Pre: none
//Post: none
void display_goodbye();

int main()
{
  display_welcome();
  print_date();
  print_random_name();
  print_random_job();
  print_random_date();
  display_goodbye();
  
  cout << endl << endl;
  
  return 0;
}

void display_welcome()
{
  cout << "Welcome to the Rekall Identity Trial!\n" << endl;
  
  return;
}

void print_date()
{
  cout << "Appointment Date: 4/1/2061\n" << endl;
  
  return;
}

void print_date(const int Year, const int Month, const int Day)
{
  cout << "Appointment Date: " << Year << "/" << Month << "/" << Day;
  
  return;
}

void print_random_name()
{
  srand(time(NULL));
  int RandNum;
  const int RandMax = 5, RandMin = 1;
  
  cout << "Your new name: ";
  
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  
  switch(RandNum)
  {
    case 1: cout << "John "; break;
    case 2: cout << "Austin "; break;
    case 3: cout << "Blake "; break;
    case 4: cout << "Ron "; break;
    case 5: cout << "Timmy "; break;
  }
  
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  
  switch(RandNum)
  {
    case 1: cout << "Anderson\n"; break;
    case 2: cout << "Swanson\n"; break;
    case 3: cout << "Turner\n"; break;
    case 4: cout << "Carter\n"; break;
    case 5: cout << "Weasley\n"; break;
  }
  
  return;
}

void print_random_job()
{
  srand(time(NULL));
  int RandNum;
  const int RandMax = 6, RandMin = 1;
  
  cout << "Your new job: ";
  
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  
  switch(RandNum)
  {
    case 1: cout << "Toilet Scrubber\n"; break;
    case 2: cout << "Small Claims Judge\n"; break;
    case 3: cout << "High School Teacher\n"; break;
    case 4: cout << "Pipe Cleaner\n"; break;
    case 5: cout << "Cement Pourer\n"; break;
    case 6: cout << "Car Salesman\n"; break;
  }
  
  return;
}

void print_random_date()
{
  srand(time(NULL));
  int RandNum, RandMax = 12, RandMin = 1;
     
  cout << "Your new birthday: ";
       
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  cout << RandNum << "/";
  
  RandMax = 31;
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  cout << RandNum << "/";
  
  RandMax = 3500;
  RandMin = 1500;
  RandNum = rand()%(RandMax-RandMin+1)+RandMin;
  cout << RandNum << endl;
}

void display_goodbye()
{
  cout << "The Future Awaits!!";
  
  return;
}
    
    
         
