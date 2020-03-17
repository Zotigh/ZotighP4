/******************************************************
* Programmer: Lance Zotigh (lzotigh@cnm.edu)
* Program: Functions
* Date: 2/26/2020
* Purpose:  To calculate the carry load of a mini van
* project.
*******************************************************/

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

// constants
const double twoDoorSpace = 24;
const double fourDoorSpace = 32.8;
const double fortKnoxBarGoldVolume = 7 * ( 3 + ( 5 / 8 )) * ( 1 + ( 3 / 4 ));
const double maxWeightTwoDoor = 1800;
// divide by this to get cubic feet from inches
const double converstionFtToIn = fortKnoxBarGoldVolume / 1728;

using namespace std;

void WriteHeader();
//void WriteInstrictions();
int SelectMetalForBars();
int SelectCooperModel();
int SelectNumberOfBars();
/*double CalculateWeightOfBars(double density, int numBars);
double CalculateCargoCapacity(int cooperType);
string CarryBarWeight();
string FirBarVolume(int numBars, double cargoCapacity);
string MaxCarBars(double cargoCapacity, double onrBarWt);*/

#endif // !_FUNCTIONS_H
