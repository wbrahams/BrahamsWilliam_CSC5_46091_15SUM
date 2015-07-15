/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015 11:05 AM
 * Purpose:  Calculate the rise of water over years
 * Gaddis_9thEd_Chap5_Prob3
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
	int year;
	float IncPrYr, totwatlv;

	totwatlv=0;
	IncPrYr=1.5;
	year=1;

cout<<"***************************************"<<endl;
cout<<"Year, How much the water has risen"<<endl;
cout<<"***************************************"<<endl;

while(year<=25)
	{
	totwatlv+=IncPrYr;

	cout<<year<<"    "<<totwatlv<<"  millimeters"<<endl;

	year++;
	}

	return 0;
}