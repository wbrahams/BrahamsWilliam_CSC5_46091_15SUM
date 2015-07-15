/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015 11:25 AM
 * Purpose:  Calculate the increase of member fees over 6 years
 * Gaddis_9thEd_Chap5_Prob5
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
	float charges=2500;
	
	cout<<"Year   Charges"<<endl;

	for(int i=1;i<=6;i++)
	{
		cout<<i<<"      "<<charges<<endl;
		charges+=charges*0.04;
	}
//to verify the numbers, i made a spreadsheet here
//https://goo.gl/yeYFDE
return 0;

}