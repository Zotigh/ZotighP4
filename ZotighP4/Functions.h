/******************************************************
* Programmer: Lance Zotigh
* Program: Functions
* Date: 2/26/2020
* Purpose: Provide functions needed in AskName AgeFunc
* project.
*******************************************************/

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

using namespace std;

void WriteHeader();
void WriteInstrictions();
int SelectCooperModel();
int SelectNumberOfBars();
double CalculateCargoCapacity(double density, int numBars);
string CarryBarWright();
string FirBarVolume(int numBars, double cargoCapacity);
string MaxCarBars(double cargoCapacity, double onrBarWt);

#endif // !_FUNCTIONS_H
