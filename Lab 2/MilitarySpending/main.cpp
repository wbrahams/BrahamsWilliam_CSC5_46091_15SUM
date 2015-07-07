/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on June 25, 2015, 9:53 PM
 * Purpose: Calculate Percentage Military Budget w.r.t. Federal Budget
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries (None)

//Global Constants 
const unsigned char CNVPCT=100;//Conversion to Percentage

//Function Prototype (None)

//Begin Execution commands
int main(int argc, char** argv) {
    
    //Declare Variables 
    float fedBudg;    //Federal Budget in $'s
    float milBudg;    //Military Budget in $'s
    float milPCTG;    //Percent Federal budget spends on Military 
   
    //Initialize values from reference website
    //https://www.whitehouse.gov/sites/default/files
    // /omb/budget/fy2015/assets/tables.pdf
    fedBudg = 3.80e12f;//3.800 trillion dollars
    milBudg = 6.06e11f;// 606 billion dollars
  
    //Calculate the Percentage of the Federal Budget
    milPCTG = (milBudg/fedBudg)*CNVPCT;
  
    //Output the results 
    cout << "Percentage of the Federal Budget spent on the Military = " 
         << milPCTG << " %" << endl;
    
    //And we are off!
    return 0;
}