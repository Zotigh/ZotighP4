/******************************************************
* Programmer: Lance Zotigh (lzotigh@cnm.edu)
* Program: Functions
* Date: 2/26/2020
* Purpose:  To calculate the carry load of a mini van
* project.
*******************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "Functions.h"

using namespace std;


const double aluminum = 0.098;
const double silver = 0.379;
const double gold = 0.619;
const double copper = 0.323;
const double platinum = 0.773;

//Write_Hello writes a greeting message to the screen
void WriteHeader()
{
	cout << "\nMINI WEIGHT by Lance Zotigh" << endl;
	cout << "\nWelcome to my program!" << endl;
	cout << "Purpose: To calculate if a mini cooper can carrie a given load of metal" << endl;
}

//void WriteInstrictions() 
//{
//
//}

int SelectCooperModel()
{
	int carModelInput;

	//vector<string> namesOfCoopers;
	//namesOfCoopers.push_back("");
	//namesOfCoopers.push_back("");
	//namesOfCoopers.push_back("");
	//namesOfCoopers.push_back("");
	//namesOfCoopers.push_back("");
	//namesOfCoopers.push_back("");

	vector<string> namesOfCoops;
	namesOfCoops.push_back("2 door mini");
	namesOfCoops.push_back("4 door mini");

	cout << "\nPlease pick a car from the list" << endl;

	for (int i = 0; i <= 1; ++i)
	{
		cout << (i + 1) * 2 << " = " << namesOfCoops[i] << endl;
	}
	cout << "Response: ";
	cin >> carModelInput;
	cin.ignore();

	/*this was just to see if it was returning 2 or 4 
	cout << input << endl;*/

	/*This is how you display the number from the vector
	cout << namesOfCoops[input - 1];*/

	return carModelInput;
}

int SelectMetalForBars()
{
	int metalInput;

	vector<string> namesOfMetals;
	namesOfMetals.push_back("Aluminum");
	namesOfMetals.push_back("Silver");
	namesOfMetals.push_back("Gold");
	namesOfMetals.push_back("Copper");
	namesOfMetals.push_back("Platinum");

	for (int i = 0; i <= 4; ++i)
	{
		cout << i + 1 << " = " << namesOfMetals[i] << endl;
	}

	cout << "Choice: ";
	cin >> metalInput;
	cin.ignore();

	//int metalChoice = namesOfMetals[metalInput - 1];
	int metalIndex = metalInput - 1;
	return metalIndex;
}

//int SelectNumberOfBars()
//{
//
//}

//double CalculateCargoCapacity(double density, int numBars)
//{
//
//}

//double CalculateCargoCapacity(int cooperType)
//{
//
//}

//string CarryBarWright()
//{
//
//}

//string FirBarVolume(int numBars, double cargoCapacity)
//{
//
//}

//string MaxCarBars(double cargoCapacity, double onrBarWt)
//{
//
//}