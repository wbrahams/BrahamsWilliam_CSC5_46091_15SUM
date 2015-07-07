/*
 * File: main.cpp
 * Author: William Brahams
 * Created on June 25, 2015, 9:24 PM
 *Purpose: Lab, Free fall problem
 */

//System Libraries
#include <iostream> //I/O Library
using namespace std;//Namespace for iostream

//User Libaries

//Global Constants
const float GRAVITY=3.217e1f;//Acceleration constant due to Earths Gravity (in ft/s^2)

//Fucntion Prototypes
int main(int argc, char** argv) {
	//Declare Variables
	//dstnce=the distance dropped (ft)
	//time=Time (s)
	float dstnce, time;
	//Prompt then Input the time
	cout<<"To calculate the Distance Dropped\n";
	cout<<"Input the Time in Seconds\n";
	cout<<"Time should be in floating point format\n";
	cin>>time;
	//calculate the free-fall distance
    //dstnce=1/2*GRAVITY*time*time;//Incorrect
    //dstnce=1.0f/2*GRAVITY*time*time;//Correct
    //dstnce=1/2.0f*GRAVITY*time*time;//Correct
    dstnce=GRAVITY*time*time/2;//Correct
	//Output the results
	cout<<"The distance traveled = ";
	cout<<dstnce<<" (ft)"<<endl;
	//and cross the finish line!
	return 0;
}