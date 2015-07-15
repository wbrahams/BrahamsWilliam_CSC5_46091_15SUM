/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015 11:35 AM
 * Purpose:  convert fahrenheit to celsius
 * Gaddis_9thEd_Chap5_Prob12
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {

float Farheit;
	
cout<<"*******************"<<endl;
cout<<"Celsius   Fahrenheit"<<endl;
cout<<"*******************"<<endl;

for(float Celsius=0;Celsius<=20;Celsius++)
	{
	Farheit=((9/5)*Celsius)+32;
	cout<<Celsius<<"        "<<Farheit<<endl;
	}
	system("pause");
	return 0;
}