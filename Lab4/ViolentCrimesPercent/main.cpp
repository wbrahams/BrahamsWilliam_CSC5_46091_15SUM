/*
 * File: main.cpp
 * Author: William Brahams
 * Created on: June 26, 2015, 10:59 PM
 * Purpose: Find the percentage of violent crime
 * between U.S. and England
 */

//System Libraries
#include <iostream> // I/O Library
using namespace std; //Namespace for iostream

//User Libraries (None)

//Global Constants
const unsigned char CNVPCT=100.0f;//Conversion to percentage w/.00 accuracy

//Function Prototype (None)
//Begin Execution commands
int main(int argc, char** argv) {
	//Declare Variables
	//Unless noted, all figures in millions for simplicity
	cout.precision(2);//set precision for the percentage output, 2 decimal points
	float USVioCr; 	//Number of violent crimes in United States
	float EnVioCr;	//Number of violent crimes in England
	float USpop; 	//US population
	float Enpop; 	//England population
	float USpctVC;	//Percent of violent crimes in United States
	float ENpctVC;	//Percent of violent crimes in England

	USVioCr = 11.88f;//number of crimes in millions
	EnVioCr = 6.52f;//number of crimes in millions
	USpop   = 318.00f;//population in millions
	Enpop   = 64.00f;//population in millions
	
	//Calculate the percentages 
	USpctVC = (USVioCr/USpop)*CNVPCT;
	ENpctVC = (EnVioCr/Enpop)*CNVPCT;
	
	cout<<fixed<< "Percentage of vilolent crimes per citizen in US = "
		<< USpctVC<< "%" <<  endl;
	cout<< "Percentage of vilolent crimes per citizen in England = "
		<< ENpctVC << "%" << endl;

//And we are off!
    return 0;
}