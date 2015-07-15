/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015 11:35 AM
 * Purpose:  Calculate the cumulative addition of doubling daily
 * Gaddis_9thEd_Chap5_Prob7
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
	
	int days;
	float final=1;
	float total=0.00;
	cout<<"Enter the number of days: "<<endl;
	cin>>days;

	for (int i=1;i<(days+1); i++)
	{
		cout<<"Day"<<i<<": "<<'\t'<<"$"<<final/100<<endl;
		total+=final;
		final+=final;
	}

	cout<<"Total: "<<'\t'<<"$"<<total/100<<endl;
	return 0;
}