/******************************************************
* Programmer: Lance Zotigh
* Program: Functions
* Date: 2/26/2020
* Purpose: Provide functions needed in AskName AgeFunc
* project.
*******************************************************/

#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

//Write_Hello writes a greeting message to the screen
void WriteHeader()
{
	cout << "Welcome to my program!" << endl;
}

void WriteInstrictions() 
{

}

int SelectCooperModel()
{
	int input;
	cout << "Please place your input: ";
	cin >> input;
	cin.ignore();
	return input;
}

int SelectMetalForBars()
{

}

int SelectNumberOfBars()
{

}

double CalculateCargoCapacity(double density, int numBars)
{

}

double CalculateCargoCapacity(int cooperType)
{

}

string CarryBarWright()
{

}

string FirBarVolume(int numBars, double cargoCapacity)
{

}

string MaxCarBars(double cargoCapacity, double onrBarWt)
{

}