
/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 7, 2015, 2:20 PM
 * Purpose:  Convert tons to ounces and number of boxes per ton
 */

//System Libraries
#include <iostream> 
#include <stdlib.h> 
using namespace std;

//User Libraries

//Global Constants
const float OzPrTon=35273.92;

//Function Prototypes

//Begin Execution
int main(int argc, char** argv){
	//Declare Variables
    float ounces,tons; 
    int boxes; 
    char ans;
     
	//Setup a Do/while loop
    do{ 
		cout << "Please enter weight in ounces: "; 
        cin >> ounces; 
		
		//Calculate the conversion and number of boxes
        tons = ounces/OzPrTon; 
        boxes = OzPrTon/ounces; 

        cout << "\n\nTons: " << tons << "\nBoxes to the ton: " << boxes; 
        cout << "\n\nAgain? (y or n): "; 
        cin >> ans; 
    }while(ans == 'y' || ans == 'Y'); 

      system("PAUSE"); 
      return 0; 
}  