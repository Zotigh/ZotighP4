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

void WriteInstrictions() 
{

}

int SelectCooperModel()
{
	int input;
	cout << "Please pick a car from the list";
	cin >> input;
	cin.ignore();
	return input;
}

//int SelectMetalForBars()
//{
//
//}

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