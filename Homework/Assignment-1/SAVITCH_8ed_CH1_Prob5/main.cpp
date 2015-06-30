/*
 * File: main.cpp
 * Author: William Brahams
 * Created on June 29, 2015, 3:52 PM
 * Purpose: Homework, Savitch Ch1 P5
 */
 
//System Libraries
#include <iostream>
using namespace std;

//User Libaraies (None)

//Global Constants (None)

//Function Prototypes (None)

//Execution Begins Here
int main(int argc, char** argv) {
	int num1, num2, sum, prod;
	cout << "Hello\n";
	cout << "Press return after entering a number.\n";
	cout << "Enter the first number:\n";
	cin >> num1;
	cout << "Enter the second number:\n";
	cin >> num2;
	sum = num1 + num2;
	prod = num1 * num2;
	cout << "The sum of these two products is: \n";
	cout << sum <<endl;
	cout << "and ";
	cout << "Their product is \n";
	cout << prod <<endl;
	cout << "Goodbye \n";
	
	return 0;
}