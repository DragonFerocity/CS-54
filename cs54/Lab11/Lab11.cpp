//Ryan Andrews		Date: April 8, 2014
//Class: CS 54		Section: 3A
//File: Lab11.cpp

//
//
//
void display_welcome();
//
//
//
int find(char haystack[], char needle[]);
//
//
//
void subcpy(char source[], char destination[], int firstchar);
//
//
//
void subcpy(char source[], char destination[], int fc, int numchars);
//
//
//
void replace(char hay[], char needle[], char replace[], 
						 char destination[], int Pos);
//
//
//
void display_goodbye();

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char Message[] = "We love Big Brother! He protects us from Eastasia!";
  char CopyAll[100] = {'\0'}, CopyPart[100] = {'\0'};
	char Destination[100] = {'\0'};
	int Pos = 0;
  
  display_welcome();
  Pos = find(Message,"Brother");
	Pos = find(Message,"Rainbow");
  Pos = find(Message,"Eastasia");
	
  subcpy(Message, CopyAll, 3);
	cout << endl << "Subcpy 3 -> end: " << endl;
  cout << CopyAll;
	
  subcpy(Message, CopyPart, 3, 8);
	cout << endl << "Subcpy 3 -> 8" << ":" << endl;
  cout << CopyPart;
	
  subcpy(Message, CopyPart, 3, 100);
	cout << endl << "Subcpy 3 -> 100" << ":" << endl;
  cout << CopyPart;
	
  replace(Message,"Eastasia","Eurasia",Destination, Pos);  
  
  return 0;
}

void display_welcome()
{
  cout << "For Big Brother!" << endl << endl;
  
  return;
}

int find(char haystack[], char needle[])
{
  int Pos, i = 0, j = 0, h = 0, NeedleLen;
	bool Found = false;
	
	NeedleLen = strlen(needle);
  
  while(!Found && haystack[i] != '\0')
  {
    j = 0;
		h = i;
		while (haystack[h] == needle[j] && needle[j] != '\0')
		{
			if (j == NeedleLen-1)
				Found = true;
      j++;
			h++;
    }
		
		i++;
		
		if (i >= 49)
			Pos = -1;
		else
			Pos = i;
  }

  cout << "Finding \"" << needle << "\" in \"" << haystack << "\": " 
       << Pos << endl;
  
  return Pos;
}

void subcpy (char source[], char destination[], int firstchar)
{
  int i = firstchar;
  
  while (source[i] != '\0')
  {
    destination[i-firstchar] = source[i];
    i++;
  }
  
  return;
}

void subcpy (char source[], char destination[], int fc, int numchars)
{
  for (int i = 0; i < numchars; i++)
  {
    destination[i] = source[i+fc];
  }
	
  return;
}

void replace(char hay[], char needle[], char replacer[], char destination[], int Pos)
{
  subcpy(hay,destination,0,Pos-1);
	cout << endl << destination;
  strcat(destination,replacer);
  subcpy(hay,destination,Pos+8);
  
  cout << endl << "\nOriginal: " << hay << endl;
  cout << "\nFixed: " << destination << endl << endl;
  
  return;
}
