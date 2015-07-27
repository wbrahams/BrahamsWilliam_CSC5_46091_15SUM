/* 
 * File:   main.cpp
 * Author: William
 *
 * Created on July 26, 2015, 11:31 AM
 */

#include <iostream>

using namespace std;

void LinearS (int[],int);


int main(int argc, char** argv) {
    
    int LinEnts = 18;
    const int SIZE = 18;
    int array [SIZE] = {5658845,8080152,1005231,
    4520125,4562555,6545231,7895122,5552012,3852085,
    8777541,5050552,7576651,8451277,7825877,7881200,
    1302850,1250255,4581002};
    LinearS (array, LinEnts);
   
    return 0;
}

        void LinearS (int array[],int LinEnts)
{
    int charge;
    bool found=false;
    cout<<" Enter your seven digit account number: "<<endl;
    cin>>charge;
    for(int i=0;i<LinEnts;i++)
    {if(array[i]==charge)
    {found=true;
    break;
    }
    }
    if(found)
    {
        cout<<"Number is valid "<<endl;
    }
    else
    {
        cout<<"Number is invalid"<<endl;
    }
}