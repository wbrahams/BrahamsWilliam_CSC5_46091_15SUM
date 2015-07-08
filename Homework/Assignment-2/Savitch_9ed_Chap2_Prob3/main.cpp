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
const float retPCT = 1.076;

//Function Prototypes

//Begin Execution
int main(int argc, char** argv) {
        //Declare the variables
	unsigned int currsal, newsal, retpay, oldmnth, newmnth, months;
	char ans;

	cout<<"Congratulations on the raise. "<< endl;
	cout<<"Please press enter after each number."<< endl;
	cout<<"You are also owed retroactive pay over a given number of months. "<< endl;
	cout<<"Please enter your salary and months to calculate backpay. "<<endl;

	cin>>currsal>>months;
        //Calculations for the new salaries and backpay
       
	oldmnth=currsal/12;
	newsal=currsal*retPCT;
	newmnth= newsal/12;
	retpay=(newmnth- oldmnth)*months;

	cout << "Your new salary is: $";
	cout<<newsal<<endl;

	cout<< "Your new monthly salary is: $";
	cout<<newmnth<<endl;

	cout<<"And you are owed ";
	cout<< retpay<<" dollars in backpay"<<endl;
        
	return 0;
}