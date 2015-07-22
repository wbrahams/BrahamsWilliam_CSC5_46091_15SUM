 /*
 * File: main.cpp
 * Author: William Brahams
 * Created on July 16, 2015, 5:50PM
 * Purpose: Demonstrate parallel arrays
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype
void prntAry(int arg[], int length);


//Begin main function here
int main(int argc, char** argv) 
{
	const int SIZE = 10;													//Number of factors in first array
	int P1[SIZE]={1,2,3,4,5,6,7,8,9,10};		                    //Holds P1 array
	int P2[SIZE]={1,4,9,16,25,36,49,64,81,100};			//Holds P2 array
	
	//Statement to make sense of numbers
	cout<<"The square of each number in the first row is the";
	cout<<"corresponding number in the next" <<endl;
	
	//Command to print the arrays
	prntAry(P1,10);
	prntAry(P2,10);
	
	return 0;
}

/***********************************************
 *				Print Array						   *
 ***********************************************
 * Purpose: To print a character array with the defined numbers
 * Input:
 * 		n-> The size of the array
 * 		a-> The character array
 * Output:
 * 		On Screen
 */

void prntAry(int a[], int length){
	for (int n=0; n<length; ++n)
				cout << a[n] << ' ' ;
	cout << '\n';
}