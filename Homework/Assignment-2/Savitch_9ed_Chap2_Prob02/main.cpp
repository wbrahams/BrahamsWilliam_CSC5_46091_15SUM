/*
 * File: main.cpp
 * Author: William Brahams
 * Created on: July 6, 2015, 11:45PM
 * Purpose: Savitch_9Ed_Ch2_P2 Calculate backpay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants 

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
        //Declare the variables
	int currsal, newsal, retpay, mnthsal;
        //Bring in the constant of the pay raise
	const float retPCT = 1.076;
	cout<<"Congratulations on the raise. "<< endl;
	cout<<"You are also owed retroactive pay over 6 months. "<< endl;
	cout<<"Please enter your salary to calculate backpay. "<<endl;

	cin>>currsal;
        //Calculations for the new salaries and backpay
        //retpay is /2 because the period is one half year
	newsal=currsal*retPCT;
	mnthsal = newsal/12;
	retpay=(newsal - currsal)/2;

	cout << "Your new salary is: $";
	cout<<newsal<<endl;

	cout<< "Your new monthly salary is: $";
	cout<<mnthsal<<endl;

	cout<<"And you are owed ";
	cout<< retpay<<" dollars in backpay"<<endl;
        
	return 0;
}
