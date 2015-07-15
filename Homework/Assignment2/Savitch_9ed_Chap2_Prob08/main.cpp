/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 7, 2015, 12:18 PM
 * Purpose:  Stereo Interest Paydown
 * Savitch_9ed_Chap2_Prob8
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin Execution Chain
int main()
{
	//Declare Variables
	float debt=1000;
	float intrst,pay,tintrst=0;
	int month=0;
	//tinterest=total interest paid, will be looped
	cout<<"You bought a $1000 stereo under the plan,"<< endl;
	cout<<"$0 down, 18% APR, $50/month payments" << endl;

	while (debt>0)
	{
		intrst=debt*.015;
		pay=50-intrst;
		debt=debt-pay;
		month=month+1;
		tintrst=tintrst+intrst;
	}
	//Total interest will loop until debt=0
cout<<"It will take "<<month<<" months to pay off your stereo."<<endl;
cout<<"Total interest paid is $"<<fixed<<setprecision(2)<<tintrst<<endl;
	//That should be the whole shebang
	return 0;
}