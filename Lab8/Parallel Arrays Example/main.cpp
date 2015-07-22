#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    //declare city and sales array
    string city[8] = {" "};
    int sales[8] = {0};
 
    //declare variables
    string cityName ="";
    int cityTotal = 0;
    int salesAmt = 0;
    int i = 0;
    char another = ' ';
 
    //init city array
    city[0] = "Atlanta";
    city[1] = "Buffalo";
    city[2] = "Chicago";
    city[3] = "Dallas";
    city[4] = "Houston";
    city[5] = "Honololu";
    city[6] = "Miami";
    city[7] = "Reno";
 
    do
    {
        //input city name and if found input sales amount
        cout << "Enter a City: Atlanta, Buffalo, Chicago, Dallas, Houston, Honololu, Miami, or Reno: ";
        cin >> cityName;
 
        for(i = 0; i < 8; i++)
    {
        if(cityName == city[i])
        {
            cout << "Enter sales amount: ";
             cin >> salesAmt;
             sales[i] += salesAmt;      
        } else if (i==7)
        {
            cout << "ERROR: CITY NOT AVAILIABLE" << endl;
        }//end if
    }//end for loop
        //ask if another city
            cout << "Enter another city?: ";
            cin >> another;
 
    } //end do loop
    while(another == 'Y' || another == 'y');
    {
        for(i = 0; i < 8; i++)
        {
            cout << "City: " << "           " << "Sales: " << endl;
            cout << city[i] << "          " << sales[i] << endl;
        }
        //end for loop
    } //end while loop
 
    return 0;
} //end of main