/*
 * File: main.cpp
 * Author: William Brahams
 * Created on: July 7, 2015, 8:03 PM
 * Purpose: Savitch_9ed_Chap2_Prob5 Maximum allowable capacity
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin the Execution
int main(int argc, char** argv) {
	//Declare the variables
	int group, cap;
	char choice;

	do
	{
	cout <<"To find out whether the group is safe and legal,"<< endl;
	cout <<"Enter the size of the group:";
	cin >>group;
        cout <<"Enter the room capacity :";
        cin >>cap;

	if(group<= cap)
        cout << "It is safe and legal to convene";
        else if (group> cap)
	{
	cout<<"This group is too large for the provided space,"<<endl;
	cout<<"You will need to kick out " <<(group-cap)<< " to keep this legal and safe";
        }
	cout << endl << "Would you like to run this again? <y/n> ";
	cin >> choice;
	cout << endl; 
	}
while ( choice =='y' || choice == 'Y');

cout << "\n Goodbye\n";
return 0;
} 
