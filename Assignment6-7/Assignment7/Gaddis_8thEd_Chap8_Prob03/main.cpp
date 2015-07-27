/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015, 11:15 AM
 * Purpose: 
 * Gaddis_9thEd_Chap5_Prob1
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {

int numbers[10]={13579,26791,26792,33445,55555,
62483,77777,79422,85647,93121};
int low=0,max=10,mid;
int i,win=-1, n;

//User number entry
cout<<"Enter the winning number: ";
cin>>n;

//logic for selection
while(low<=max )
    {mid=(low+max)/2;
    if(numbers[mid]<n)
       low = mid + 1;
    else
        {if(numbers[mid]>n )
            max=mid-1;                   
        else
           {cout<<n<<" is a winner!!! :)\n";
            low=15;                         
           }
        }
     }
if(low!=15)
cout<<"Sorry you did not win\n";

return 0;
}