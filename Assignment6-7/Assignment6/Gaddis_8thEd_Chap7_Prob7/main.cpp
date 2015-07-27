/* 
 * File:   main.cpp
 * Author: William
 * Created on July 26, 2015, 11:28 AM
 * Purpose:HW6 Gaddis 8thEd Chap7 Prob7
 */

//System Libraries 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Begin main function
int main(int argc, char** argv) 
{
    //Initialize all variables
    int array[30];
    int counter,num,total;
    int small, large;
    ifstream infile;
    
    //Opens the file 
    infile.open("numbers.txt");
    infile>>num;
    counter=0;
    
    //Access the file
    //Enter the numbers line-by-line into the array
    while(infile)
    {
        array[counter]=num;
        infile>>num;
        counter++;
    }
    

    small=array[0];
    large=array[0];
    total=0;
    
    //Finding the largest and smallest
    for (int j=0;j<counter;j++)
    {
        if (array[j]>large)
            large=array[j];
        if (array[j]<small)
            small=array[j];
        total=total+array[j];
    }
    
    cout<<"The smallest number is: "<<small<<endl;
    cout<<"The Largest number is: "<<large<<endl;
    cout<<"The total numbers in the array is: "<<total<<endl;
    cout<<"The average: "<<total/counter<<endl;
    
    infile.close();
    
    
    return 0;
}

