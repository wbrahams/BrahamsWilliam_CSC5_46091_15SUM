/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 26, 2015, 11:26 AM
 * Purpose: HW6 Gaddis Ch7 Prob1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) 
{
    //Declare Variables
    const int size=10;
    int low,high;
    int HighLow[size];
    
    //Prompt User for input
    cout<<"To find the low and high, enter an array: "<<endl;
    
    //Input values into the array
    //(start at position 0, less than ten, increase by one)
    for (int i=0;i<size;i++)
    {
        cin>>HighLow[i];
    }
    
    //Starting element for low, high
    low=HighLow[0];
    high=HighLow[0];
    
    //If a value is smaller than the current assigned number, it gets replaced
    for (int j=0;j<size;j++)
    {
        if(HighLow[j]>high)
            high=HighLow[j];
        if(HighLow[j]<low)
            low=HighLow[j];
    }
    
    cout<<"The lowest number is: "<<low<<endl;
    cout<<"The highest number is: "<<high<<endl;
            
    return 0;
}

