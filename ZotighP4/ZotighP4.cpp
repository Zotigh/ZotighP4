// ZotighP4.cpp : This file contains the 'main' function. Program execution begins and ends there.

/******************************************************
* Programmer: Lance Zotigh
* Program: Functions
* Date: 2/26/2020
* Purpose: To calculate the carry load of a mini van
* project.
*******************************************************/


#include <iostream>
#include "functions.h"

const double aluminum = 0.098;
const double silver = 0.379;
const double gold = 0.619;
const double copper = 0.323;
const double platinum = 0.773;

int main()
{
	string choice;

	WriteHeader();

	do {
		int SelectCooperModel();

		// cout to ask if user wants to go again
		cout << "\nCalculate another? (y/n); ";
		cin >> choice;

		while (choice != "n" && choice != "y")
		{
			cout << "Not a valid choice." << endl;
			cout << "Please enter a valid option (y/n): ";
			cin >> choice;
		}

	} while (choice != "n" && choice == "y");

	return 0;
}
