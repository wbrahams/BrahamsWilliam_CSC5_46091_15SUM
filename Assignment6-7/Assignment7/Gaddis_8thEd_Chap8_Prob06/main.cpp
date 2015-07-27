/* 
 * File:   main.cpp
 * Author: William
 * Created on July 26, 2015, 11:33 AM
 * Purpose: HW Gaddis 8thEd Chap8 Prob6
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

void selectionSort (string[],int);

//Begin execution
int main(int argc, char** argv) {

	//This section was provided from the book
	//String value of the names
    const int NUM_NAMES = 20;
        string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
                                    "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                    "Taylor, Terri", "Johnson, Jill",
                                    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                    "James, Jean", "Weaver, Jim", "Pore, Bob",
                                    "Rutherford, Greg", "Javens, Renee",
                                    "Harrison, Rose", "Setzer, Cathy",
                                    "Pike, Gordon", "Holland, Beth" }; 
        
    cout<<"Given string elements are :"<<endl;
    cout<<"___________________________"<<endl;
    
    for(int index=0;index<NUM_NAMES;index++)
        cout<<setw(15)<<names[index]<<endl;
    
    selectionSort(names,NUM_NAMES);
    
    cout<<"\nAfter selectionShort Applied:"<<endl;
    cout<<"_______________________________"<<endl;
    
    for(int index=0;index<NUM_NAMES;index++)
        cout<<setw(15)<<names[index]<<endl;
    return 0;
}

void selectionSort(string names[], int size)
 {
    int startScan, minIndex;
    string minValue;
    
    for (startScan = 0; startScan < (size − 1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (names[index] < minValue)
            {
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = array[startScan];
        names[startScan] = minValue;
    }
 } 