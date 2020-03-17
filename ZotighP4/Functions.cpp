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
	int input;

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
	cin >> input;
	cin.ignore();

	/*this was just to see if it was returning 2 or 4 
	cout << input << endl;*/

	/*This is how you display the number from the vector
	cout << namesOfCoops[input - 1];*/

	return input;
}

int SelectMetalForBars()
{
	vector<string> namesOfMetals;
	namesOfCoopers.push_back("Aluminum");
	namesOfCoopers.push_back("Silver");
	namesOfCoopers.push_back("Gold");
	namesOfCoopers.push_back("Copper");
	namesOfCoopers.push_back("Platinum");


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