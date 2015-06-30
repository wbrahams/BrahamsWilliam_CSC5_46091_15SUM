/*
 * File: main.cpp
 * Author: William Brahams
 * Created on June 29, 2015, 4:36 PM
 * Purpose: Homework, Savitch 8ed Ch1P8
 */
 
 // System Libraries
#include <iostream>//I/O Library
using namespace std;//Namespace for iostream

//User Libraries

//Global Constants

//Function Prototypes

//Begin execution

int main(int argc, char** argv) {
	int quarter, dime, nickel;
	short cents;
	cout<<"Enter how many quarters you have:\n";
	cin>>quarter;
	cout<<"Enter how many dimes you have:\n";
	cin>>dime;
	cout<<"Enter how many nickels you have:\n";
	cin>>nickel;
	cents=5*nickel+10*dime+25*quarter;
	cout<<"\nThe value of the coins are:"<<cents;
	
	return 0;
}