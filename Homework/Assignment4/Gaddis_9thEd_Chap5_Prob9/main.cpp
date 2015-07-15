/* 
 * File:   main.cpp
 * Author: William Brahams
 * Created on July 14, 2015 11:35 AM
 * Purpose:  Calculate the occupancy of a hotel
 * Gaddis_9thEd_Chap5_Prob9
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
	float rooms, floors, RoomOcc;
	float TotRoom=0, TotOcc=0;
	float perRooms;

	cout<<"Enter the number of floors:";
	cin>>floors;
	
	if(floors<1)
	{
		cout<<"Re-Enter the number of floors: ";
		cin>>floors;
	}
	for(int i=0;i<floors;i++)
	{
		if(floors>=13)
		break;

		cout<<"Enter the number of rooms: ";
		cin>>rooms;
		if(rooms>10)
		{
			cout<<"Re-Enter the number of rooms:";
			cin>>rooms;
		}

		TotRoom=TotRoom+rooms;

		cout<<"Enter the number of rooms that have been taken: ";
		cin>>RoomOcc;

		TotOcc=TotOcc+RoomOcc;

	}
	
	cout<<"The total number of rooms in the hotel: "<<TotRoom<<endl;
	cout<<"Occupied rooms: "<<TotOcc<<endl;
	cout<<"Un-occupied rooms: "<<TotRoom-TotOcc<<endl;
	perRooms=(TotOcc/TotRoom)*100;
	cout<<"Percentage of occupied: "<<perRooms<<endl;

	return 0;
}