#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Declare Variables
	float debt=1000;
	float intrst,pay,tintrst=0;
	int month=0;

	cout<<"You bought a $1000 stereo under the plan,"<< endl;
	cout<<"$0 down, 18% APR, $50/month payments" << endl;

	while (debt>0)
	{
		intrst=debt*.015;
		pay=50-intrst;
		debt=debt-pay;
		month=month+1;
		tintrst=tintrst+intrst;
	}

	cout<<"It will take "<<month<<" months to pay off your stereo."<<endl;
	cout<<"Total interest paid is $"<<fixed<<setprecision(2)<<tintrst<<endl;

	return 0;
}