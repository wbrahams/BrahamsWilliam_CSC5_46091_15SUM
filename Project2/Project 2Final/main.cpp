#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main ()
{

  // Seeds random number generator
  srand(time(0));

  //Declaration of variables
  int money;
  int bet;
  int PlayCar=0;
  int CompCar=0;
  string PlayCarName;
  string CompCarName;

  int PSuitNu=0;
  int CSuitNu=0;
  string PlaSuit;
  string ComSuit;
  char keePlay;
  

cout << endl;
cout<<"How many dollars go you have?"<<endl;
cin>>money;
cout<<"Enter bet amount ($)"<<endl;
cin>>bet;
  
  do{
      
      
  // Generates a random number from 2 to 14
  PlayCar =  2 + (rand() % 13);
  CompCar =  2 + (rand() % 13);

  // Assigns Player card value
  if (PlayCar < 11)
    PlayCarName = PlayCar;
  if (PlayCar == 11)
    PlayCarName = "Jack";
  if (PlayCar == 12)
    PlayCarName = "Queen";
  if (PlayCar == 13)
    PlayCarName = "King";
  if (PlayCar == 14)
    PlayCarName = "Ace";

  // Assigns computer card value
  if (CompCar < 11)
    CompCarName = CompCar;
  if (CompCar == 11)
    CompCarName = "Jack";
  if (CompCar == 12)
    CompCarName = "Queen";
  if (CompCar == 13)
    CompCarName = "King";
  if (CompCar == 14)
    CompCarName = "Ace";

  // Generates a random number from 0 to 3
  PSuitNu = rand() % 3;
  CSuitNu = rand() % 3;

  // Assigns suit to Player card
  if (PSuitNu == 0)
    PlaSuit = "Spades";
  if (PSuitNu == 1)
    PlaSuit = "Diamonds";
  if (PSuitNu == 2)
    PlaSuit = "Hearts";
  if (PSuitNu == 3)
    PlaSuit = "Clubs";

  // Assigns suit to computer card
  if (CSuitNu == 0)
    ComSuit = "Spades";
  if (CSuitNu == 1)
    ComSuit = "Diamonds";
  if (CSuitNu == 2)
    ComSuit = "Hearts";
  if (CSuitNu == 3)
    ComSuit = "Clubs";

  // Output statements to display card suit and value
  if (CompCar < 11)
    cout << "Computer's card is a " << CompCar << " of " << ComSuit << endl;
  else
    cout << "Computer's card is a " << CompCarName << " of " << ComSuit << endl;
  if (PlayCar < 11)
    cout << "Player's card is a " << PlayCar << " of " << PlaSuit << endl;
  else
    cout << "Player's card is a " << PlayCarName << " of " << PlaSuit << endl;


  // If statements to evaluate which player wins
  if (PlayCarName == CompCarName)
      
    cout << "WAR, bet again!" << endl;

  if (PlayCarName > CompCarName){
    cout << "--<< The Player wins! >>--" << endl;
    money += bet;
  }
  if (PlayCarName < CompCarName){
    cout << "--<< Computer wins! >>--" << endl;
    money -= bet;
  }
cout<< endl;
cout<<"You now have "<<money<<" dollars"<<endl;   
cout<<"Keep Playing?"<<endl;  
cin>>keePlay;
   } while ((keePlay == 'Y') || (keePlay == 'y'));
    
    
    
    if(keePlay == 'N' || keePlay == 'n') {
        
        
    }
    
    
}
    cout << "Computer's card is a " << CompCar << " of " << ComSuit << endl;
  else
    cout << "Computer's card is a " << CompCarName << " of " << ComSuit << endl;
  if (PlayCar < 11)
    cout << "Player's card is a " << PlayCar << " of " << PlaSuit << endl;
  else
    cout << "Player's card is a " << PlayCarName << " of " << PlaSuit << endl;


  // If statements to evaluate which player wins
  if (PlayCarName == CompCarName)
      
    cout << "WAR, bet again!" << endl;

  if (PlayCarName > CompCarName){
    cout << "--<< The Player wins! >>--" << endl;
    money += bet;
  }
  if (PlayCarName < CompCarName){
    cout << "--<< Computer wins! >>--" << endl;
    money -= bet;
  }
cout<< endl;
cout<<"You now have "<<money<<" dollars"<<endl;   
cout<<"Keep Playing?"<<endl;  
cin>>keePlay;
   } while ((keePlay == 'Y') || (keePlay == 'y'));
    
    
    
    if(keePlay == 'N' || keePlay == 'n') {
        
        
    }
    
    
}
    cout << "Computer's card is a " << CompCar << " of " << ComSuit << endl;
  else
    cout << "Computer's card is a " << CompCarName << " of " << ComSuit << endl;
  if (PlayCar < 11)
    cout << "Player's card is a " << PlayCar << " of " << PlaSuit << endl;
  else
    cout << "Player's card is a " << PlayCarName << " of " << PlaSuit << endl;


  // If statements to evaluate which player wins
  if (PlayCarName == CompCarName)
      
    cout << "WAR, bet again!" << endl;

  if (PlayCarName > CompCarName){
    cout << "--<< The Player wins! >>--" << endl;
    money += bet;
  }
  if (PlayCarName < CompCarName){
    cout << "--<< Computer wins! >>--" << endl;
    money -= bet;
  }
cout<< endl;
cout<<"You now have "<<money<<" dollars"<<endl;   
cout<<"Keep Playing?"<<endl;  
cin>>keePlay;
   } while ((keePlay == 'Y') || (keePlay == 'y'));
    
    
    
    if(keePlay == 'N' || keePlay == 'n') {
        
        
    }
    
    
}
    cout << "Computer's card is a " << CompCar << " of " << ComSuit << endl;
  else
    cout << "Computer's card is a " << CompCarName << " of " << ComSuit << endl;
  if (PlayCar < 11)
    cout << "Player's card is a " << PlayCar << " of " << PlaSuit << endl;
  else
    cout << "Player's card is a " << PlayCarName << " of " << PlaSuit << endl;


  // If statements to evaluate which player wins
  if (PlayCarName == CompCarName)
      
    cout << "WAR, bet again!" << endl;

  if (PlayCarName > CompCarName){
    cout << "--<< The Player wins! >>--" << endl;
    money += bet;
  }
  if (PlayCarName < CompCarName){
    cout << "--<< Computer wins! >>--" << endl;
    money -= bet;
  }
cout<< endl;
cout<<"You now have "<<money<<" dollars"<<endl;   
cout<<"Keep Playing?"<<endl;  
cin>>keePlay;
   } while ((keePlay == 'Y') || (keePlay == 'y'));
    
    
    
    if(keePlay == 'N' || keePlay == 'n') {
        
        
    }
    
    
}