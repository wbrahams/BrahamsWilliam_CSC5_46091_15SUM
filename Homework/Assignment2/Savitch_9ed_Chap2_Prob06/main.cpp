/*
 * File: main.cpp
 * Author: William Brahams
 * Created on July 7, 2015, 9:56 PM
 * Purpose: Calculate gross and net pay for a worker
 *          Savitch_9ed_Chap2_Prob6
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Funtion Prototypes

//Begin Executions
int main() {
	int hours, depends, gross, social, fedinc, stainc, net;
	const float rate=16.78;
	const float soc_tax=0.06;
	const float fed_tax=0.14;
	const float sta_tax=0.05;
	const int thrkids=35;
	float NetPay,x,GrosPay,Overtim,StaTaxP,FedTaxP,OverPay,SocTaxP;
	
	cout<<"How many hours did you work this week?";
	cin>>hours;
	cout<<"How many children do you have?";
	cin>>depends;
	if (hours>=40){
	if (depends>=3)
	//Worked overtime, 3 or more kids
	{
	Overtim=hours-40;
	OverPay=Overtim*(rate*1.5);
	GrosPay=rate*hours+OverPay;

	cout<<"Your gross pay is: $"<<GrosPay<<endl;
	
	SocTaxP=GrosPay*soc_tax;
	cout<<"Your social tax pay is: $"<<SocTaxP<<endl;

	FedTaxP=GrosPay*fed_tax;
	cout<<"Your federal tax pay is: $"<<FedTaxP<<endl;
	
	StaTaxP=GrosPay*sta_tax;
	cout<<"Your state tax pay is: $"<<StaTaxP<<endl;

	cout<<"You need to pay $35 extra because you have more than two dependents"<<endl;

	NetPay=GrosPay-SocTaxP-FedTaxP-StaTaxP-35;
	cout<<"Your net pay is: $"<<NetPay;
	}
	else if (hours<40){
	Overtim=hours-40;
	//No overtime
	GrosPay= rate*hours;
	cout<<"Your gross pay is: $"<<GrosPay<<endl;
	
	SocTaxP=GrosPay*soc_tax;
	cout<<"Your social tax pay is: $"<<SocTaxP<<endl;

	FedTaxP=GrosPay*fed_tax;
	cout<<"Your federal tax pay is: $"<<FedTaxP<<endl;
	
	StaTaxP=GrosPay*sta_tax;
	cout<<"Your state tax pay is: $"<<StaTaxP<<endl;

	NetPay=GrosPay-SocTaxP-FedTaxP-StaTaxP;

	cout<<"Your net pay is: $"<<NetPay;
	}

	}
	else if (depends>=3)
	{
	GrosPay= (rate*hours)+OverPay;
	cout<<"Your gross pay is: $"<<GrosPay<<endl;
	
	SocTaxP=GrosPay*soc_tax;
	cout<<"Your social tax pay is: $"<<SocTaxP<<endl;

	FedTaxP=GrosPay*fed_tax;
	cout<<"Your federal tax pay is: $"<<FedTaxP<<endl;
	
	StaTaxP=GrosPay*sta_tax;
	cout<<"Your state tax pay is: $"<<StaTaxP<<endl;

	cout<<"You have to pay extra $35 because you have more than two dependents"<<endl;

	NetPay=GrosPay-SocTaxP-FedTaxP-StaTaxP-35;

	cout<<"Your net pay is: $"<<NetPay;
	}

	else if (depends<3)
	{
	GrosPay= (rate*hours)+OverPay;
	cout<<"Your gross pay is: $"<<GrosPay<<endl;
	
	SocTaxP=GrosPay*soc_tax;
	cout<<"Your social tax pay is: $"<<SocTaxP<<endl;

	FedTaxP=GrosPay*fed_tax;
	cout<<"Your federal tax pay is: $"<<FedTaxP<<endl;
	
	StaTaxP=GrosPay*sta_tax;
	cout<<"Your state tax pay is: $"<<StaTaxP<<endl;

	NetPay=GrosPay-SocTaxP-FedTaxP-StaTaxP;
	}
	
	return 0;
}