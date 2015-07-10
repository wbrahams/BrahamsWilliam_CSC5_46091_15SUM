/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 9, 2015, 6:55 PM
 * Purpose:  Retirement Calculator, Lab6, Functions
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float heading(float, float, )
float retire
float table

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Average Salary in $'s
    float invRate=0.06f;//Investment Rate -> see Calif Muni Bonds
    float savReq;       //Savings required at retirement
    float pDep=0.20f;   //Of your gross Salary -> Percentage Deposited 
    float deposit;      //Yearly deposit in $'s
    float savings=0;    //Initial Savings at start of Employment
    float year=0;       //Start at year 0
    
	//Output the heading function 
	//cout<<heading \n;
	//
	//
    //Calculate required savings
	//**********************************************
	//The retire function will be this chunk of data
	//**********************************************
    savReq=salary/invRate; //Required Savings
    deposit=pDep*salary;   //Deposit based salary
    
    //Loop to calculate when Retirement is possible
    do{
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

/* heading function
 * 
 * 	cout<<"Retirement Calculator\n\n";
 *      cout<<"$100,000.00 = Salary $'s\n";
 *      cout<<"      6.00% = Investment Rate --> See Muni Bonds\n";
 *      cout<<"     20.00% = Deposit as a % of Salary\n";
 *      cout<<" $1,666,667 = Amount needed to Retire $'s\n";
 * 
 * retire function
 * 
 * savReq=salary/invRate; //Required Savings
 * deposit=pDep*salary;   //Deposit based salary
 *  
 *  //Loop to calculate when Retirement is possible
 *   do{
 *       savings*=(1+invRate);//Earning based upon investment rate
 *       savings+=deposit;    //Add the deposit after earning interest
 *       year++;
 *     }while(savings<savReq);//When we have enough to retire then exit the loop
 * 
 * table function
 */

