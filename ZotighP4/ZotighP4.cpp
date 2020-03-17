// ZotighP4.cpp : This file contains the 'main' function. Program execution begins and ends there.

/******************************************************
* Programmer: Lance Zotigh (lzotigh@cnm.edu)
* Program: Functions
* Date: 2/26/2020
* Purpose: To calculate the carry load of a mini van
* project.
*******************************************************/


#include <iostream>
#include <vector>
#include "functions.h"

const double aluminum = 0.098;
const double silver = 0.379;
const double gold = 0.619;
const double copper = 0.323;
const double platinum = 0.773;

int main()
{
	string choice;

	// Header
	WriteHeader();

	// Begining of play loop
	do {
		// Show instructions thought it would be better here since the user if the repeat the program they are show how to use it again
		//WriteInstrictions();
		
		// gives user the option to select god bars
		//selectMetalForBars();

		// Shows list the user can pick from
		SelectCooperModel();
		
		// Gets the number of bars
		//SelectNumberOfBars();

		// calculation for weight capacity
		//CalculateCargoCapacity();

		// calculates weight of the bars
		//CalculateWeightOfBars();




		// cout to ask if user wants to go again
		cout << "\nWould you like to calculate another? (y/n); ";
		cin >> choice;

		// Handles an invalid answer
		while (choice != "n" && choice != "y")
		{
			cout << "Not a valid choice." << endl;
			cout << "Please enter a valid option (y/n): ";
			cin >> choice;
		}

	} while (choice != "n" && choice == "y");

	// Exit message
	cout << "Thank you for using my program, Goodbye!" << endl;
	
	return 0;
}
