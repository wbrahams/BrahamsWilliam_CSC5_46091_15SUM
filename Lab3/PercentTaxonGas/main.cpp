/*
 * File: main.cpp
 * Author: William Brahams
 * Created on June 26, 2015, 9:38 PM
 * Purpose: Find the effective tax rate 
 * paid on gasoline
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries (None)

//Global Constants
const unsigned char CNVPCT=100;//Conversion to percentage

//Function Prototype (None)

//Begin Execution commands
int main(int argc, char** argv) {

	//Declare Variables
	float fedTax=0.18f;   //Federal Tax $'s 
	float calTax=0.36f;   //California Tax $'s 
        float slsTax=0.08f;   //California Sales Tax % 
        float gallon=3.69f;   //Price of a gallon of gas $'s with all taxes included
	float BsPrSls;	      //gallon of gas minus excise taxes, sales included
	float BsPoSls;	      //Base price of gas, no taxes (remove excise taxes before sales calculation)
	float PCTtax	;     //Ratio of base price to sale price

	//Calculate the percentage that is taxes
	BsPrSls=gallon-(fedTax+calTax);
	BsPoSls=BsPrSls-(BsPrSls*.08);
	PCTtax=(1-BsPoSls/gallon)*CNVPCT;

	//Output the results
	cout<< "Percentage of taxes paid on $3.69/gallon of gasoline = "
	    << PCTtax <<"%"<< endl;

	//Thats all there is to it
	return 0;
}
	