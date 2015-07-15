/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015, 11:15 AM
 * Purpose: 
 * Gaddis_9thEd_Chap5_Prob1
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
	//intitialize variables
	int num;
	int sum=0;
	//Obtain input from user
	cout<<"Enter a number that is positive:"<< endl;
	cin>>num;
	
	//for loop starts at one, stops at num, adds as time goes by
	for(int i=1;i<=num; i++)
	{
	sum += i;
	}
	//output the added number
	cout <<"The sum of numbers from 1 to "<<num<<" is: ";
	cout<<sum<<endl;
	//And we are done
	return 0;
}