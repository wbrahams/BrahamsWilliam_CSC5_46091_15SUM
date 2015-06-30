#include <iostream>
using namespace std;	
int main()
{
	//declare variables
	char input;  //char since you want characters and not numbers


	cout << "Hello\n";
	cout << "Input a letter you wish to make up the letter 'C'\n";
	cin >> input;  //read users input

	//print a big C consisting of the users input
	cout << "  " << input << input << input << endl;
	cout << " " <<input <<"   " <<input << endl;
	cout << input << endl;
	cout << input << endl;
	cout << input << endl;
	cout << input << endl;
	cout << input << endl;
	cout << " " <<input <<"   " <<input << endl;
	cout  << "  " << input << input << input << endl;
	
	return 0;
}