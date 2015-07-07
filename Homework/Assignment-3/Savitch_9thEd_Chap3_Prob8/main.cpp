/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 7, 2015, 1:15 PM
 * Purpose:  Approximate PI and compare with given constant
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries (None)

//Global Constants
const double PI=4*atan(1.0);

//Function Prototypes (None)

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    int nTerms=20000000;
    long double apprxPI=1.0L;
    long double tol=1e-50;
    
    //Now calculate PI with a for-loop
    for(int i=3,nTerm=1;nTerm<=nTerms;i+=4,nTerm+=2){
        long double del=(-1.0L/(i+0.0L)+1.0L/(i+2.0L));
        apprxPI+=del;
        if(del>-tol&&del<tol)break;
    }
    apprxPI*=4.0L;
    
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(20);
    cout<<"The known exact Value of PI = "<<PI<<endl;
    cout<<"The approximate value of PI = "<<apprxPI<<endl;
    
    //And away, we go
    return 0;
}