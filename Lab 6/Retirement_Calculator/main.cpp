/*
 * File: main.cpp
 * Author: William Brahams
 * Created on July 9, 2015, 7:57 PM
 * Purpose: Retirement Calculator, Lab 6
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries (None)

//Global Constants (None)

//Function Prototypes (None)

//Begin Ze Executions!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=100000; //Example salary, average expectation in $'s
    float invRate=0.0f;  //Investment Rate -> see Calif. Muni Bonds
    float savReq;        //Savings required at retirement
    float pDep=0.20f;    //Of your gross salary -> percentage Deposited
    float deposit;        //Yearly deposit in $'s
    float savings=0;      //Initial savings at start of employment
    float year=0;         //Start at year 0
    
    //Calculate required savings
    savReq=salary/invRate;  //Required Savings
    deposit=pDep*salary;    //Deposit based salary
    
    //Loop to calculate when retirement is possible
    do{
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;    //Add the deposit after earning interest
        year++;
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //And thats the way the cookie crumbles
    return 0;
}