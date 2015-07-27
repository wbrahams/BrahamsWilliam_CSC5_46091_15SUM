/* 
 * File:   main.cpp
 * Author: William
 * Created on July 26, 2015, 9:09 PM
 * Purpose: HW Gaddis 8thEd Chap7 Prob14
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    int winning[10];
    int player[5];
    int count=0;
    
    //Generate random numbers
    for (int i=0;i<5;i++)
    {
        winning[i]=1+rand()%9;
    }
    
    cout<<"Enter a guess:";
    for(int i=0;i<5;i++)
    {
        cin>>player[i];
        if(player[i]>9 || player[i]<0)
        {
            cout<<"Invalid entry. Try again.";
            cin>>player[i];
        }
    }
    cout<<"Lottery Number: ";
    for(int i=0;i<5;i++)
        cout<<winning[i]<<" ";
    
    cout<<"      Matched digits: ";
    for(int i=0;i<5;i++)
    {
        if(winning[i]==player[i])
        {
            cout<<winning[i]<<" ";
            count++;
        }
    }
    cout<<endl;
    if(count==0)
        cout<<"Zero Matches"<<endl;
    else if (count==5)
        cout<<"You have matched all numbers, Grand Prize!!"<<endl;
    else
        cout<<count<<" digits matched"<<endl;
    

    return 0;
}

