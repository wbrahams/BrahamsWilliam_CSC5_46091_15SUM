/*
 * File: main.cpp
 * Author: William Brahams
 * Created on June 29, 2015, 2:56 PM
 * Purpose: Homework, Savitch Ch1 P3
 */
 
//System Libraries
#include <iostream>
using namespace std;

//User Libaraies (None)

//Global Constants (None)

//Function Prototypes (None)

//Execution Begins Here
int main(int argc, char** argv) {
	int number_of_pods, peas_per_pod, total_peas;
	cout << "Hello\n";
	cout << "Press return after entering a number.\n";
	cout << "Enter the number of pods:\n";
	
	cin >> number_of_pods;
	
	cout << "Enter the number of peas in a pod:\n";
	cin >> peas_per_pod;
	total_peas = number_of_pods / peas_per_pod;
	cout << "If you have ";
	cout << number_of_pods;
	cout << " pea pods\n";
	cout << "and ";
	cout << peas_per_pod;
	cout << " peas in each pod, then\n";
	cout << "you have ";
	cout << total_peas;
	cout << " peas in all the pods.\n";
	cout << "Goodbye\n";
	
	return 0;
}