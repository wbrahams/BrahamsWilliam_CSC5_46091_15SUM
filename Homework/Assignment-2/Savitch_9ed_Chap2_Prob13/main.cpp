/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 7, 2015, 12:18 PM
 * Purpose:  How many candy bars can I eat/day without 
 * gaining weight
 */

//System Libraries
#include <fstream>
#include <iostream>
using namespace std;

//User Libraries (None)

//Global Constants (None)

//Function Prototypes (None)

//Begin Execution Commands
int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short wtLbs, htInch, ageYrs, bmr;
    unsigned char  nChcBar,calChoc=230;
    char sex;
    ifstream input;
    
    //Loop as long as we have data
    input.open("bmr.dat");
    //Exhaust the data in the file
    //while(!input.eof()){
    while(input>>sex>>wtLbs>>htInch>>ageYrs){
        //Read from file
        //input>>sex>>wtLbs>>htInch>>ageYrs;
        //Each input separated by space
        //Next, calculate BMR due to Sex
        if(sex=='F'){
            bmr=655+4.3*wtLbs+4.7*htInch-4.7*ageYrs;
        }else{
            bmr=66+6.3*wtLbs+12.9*htInch-6.8*ageYrs;
        }
        //What is the equivalent number of chocolate bars
        nChcBar=bmr/calChoc;
        //Output the results
        cout<<"Sex = "<<sex<<endl;
        cout<<"Wt  = "<<wtLbs<<"(lbs)"<<endl;
        cout<<"Ht  = "<<htInch<<"(inches)"<<endl;
        cout<<"Age = "<<ageYrs<<"(years)"<<endl;
        cout<<"Your BMR = "<<bmr<<"(cal)"<<endl;
        cout<<"Number of candy bars you may consume = "
                <<static_cast<int>(nChcBar)<<endl;
        cout<<endl<<endl;
    }
    
    //And away, we go
    return 0;
}