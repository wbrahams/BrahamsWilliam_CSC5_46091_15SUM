/*
 * File: main.cpp
 * Author: William Brahams
 * Created on: July 17, 2015, 7:30 PM
 * Purpose: Project 2*/

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <cstring>
#include <stdio.h>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void HighSco();
void cointos();
void guessha();
void picknum();
void rocscip();
void war();
void gauntlet();
void DispDat();
void CollDat ();

//Execution begins here
int main(){
    int inN;
    clock_t start,finish;
    int duration = 0;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: cointos();break;
        case 2: guessha();break;
        case 3: picknum();break;
        case 4: rocscip();break;
        case 5: war();break;
        case 6: gauntlet();break;
        case 7: HighSco();break;
            default:;
        };
    }while(inN<8);
    /*do{
        Menu();
        inN=getN();
        switch(inN){
        start = clock();
        case 8: cointos();
        case 9: guessha();
        case 10: picknum();
        case 11: rocscip();
        finish = clock();
        duration = ((finish - start)/CLOCKS_PER_SEC);
             default:;
        };
    }while(inN>7);
      */ 
    return 0;
}

//Menu Function
void Menu(){
    int duration=0;
    clock_t start, finish;
    
    cout<<"Welcome to the Griswald Cheapo Casino, where 'none of these"<<endl;
    cout<<"games are found at the Mirage!"<<endl<<endl<<endl;
    cout<<"Type 1 for Coin Toss"<<endl;
    cout<<"Type 2 for Guess Which Hand"<<endl;
    cout<<"Type 3 for Pick a Number"<<endl;
    cout<<"Type 4 for Rock, Scissor, Paper"<<endl;
    cout<<"Type 5 for War"<<endl;
    cout<<"Type 6 to run the first 4 for a time trial"<<endl;
    cout<<"Type 7 for the high scores"<<endl;
    cout<<"Type 8 to exit \n"<<endl;
    
    
   
    
}

/******************************************************
 ***************** getN** *****************************
 ******************************************************
 * Purpose:  To pull the selection for the switch statement
 * Input:
 *      int 1-7
 * Output:
 *      int 1-7
 *///Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}





/******************************************************
  ***************HighSco*******************************
 ******************************************************
 * Purpose: Record the time into a .txt file
 * Input/Output: Seconds elapsed
 *
 */

void HighSco(){
    
        fstream infile("scores.txt",ios::in);
        if(!infile){cerr<<"file could not be found!";exit(1);}

        fstream outfile("average.txt",ios::out);
        if(!outfile){cerr<<"file could not be created!";exit(1);}


        char fname[20];
        char lname[20];
        int scores;
        char c;
        int lines=1;
        double avg=0;

        while(infile.get(c))
        {if(c=='\n') lines++;}
        infile.clear();
        infile.seekg(0);

        for(int k=0;k<lines;k++)
            {
                infile>>fname;
                infile>>lname;
                outfile<<fname<<" "<<lname<<" ";
                int sum=0;
                for(int i=0;i<10;i++)
                {
                    if(infile>>scores)
                    {sum+=scores;
                    outfile<<scores<<" ";}
                }

                outfile<<(double)sum/10.0<<endl;
            }

               
    
}
/******************************************************
 ***************** cointos*****************************
 ******************************************************
 * Purpose:  Coin toss
 * Input:
 *      1 or 2 (heads or tails)
 * Output:
 *      win or loss
 */
void cointos(){
    //initialize random with time
        srand(time(NULL));
	int guess;
        int correct=0;
    //Set correct to zero
        	
	do{
		cout<<"Try to guess the coin flip"<<endl;
		cout<<"Heads or tails? (1 or 2)"<<endl;
		cin>>guess;
		
		if(!cin)
			break;
		//If no entry, send back through loop	
		int coin=rand()%2+1;
		//Mod2 + 1 => outputs 1 or 2
		string HeadorT;
		if (coin==1)
			HeadorT = "heads";
		else
			HeadorT = "tails";
		//Assign heads or tails
                
                //Output statement
		if (guess == coin){
                        correct++;
                        //Increment correct up if chosen correctly
			cout<<"Correct, flip is " <<HeadorT<<endl;
                        cout<<"Total correct: "<<correct<<endl;
                }
		else if (guess != coin){
			cout<<"Sorry, the flip was " <<HeadorT<<endl;
                        cout<<"Total correct: "<<correct<<endl;
                }
                if (correct==10)
                    break;
	}while (guess !=1 || guess !=2);
        //Maintain loop as long as inputs are 1 or 2
       }

//Coding for guesshand() and picknum() are practically identical functions

/******************************************************
 ****************guesshand*****************************
 ******************************************************
 * Purpose:  Guess which hand the item is in
 * Input:
 *      1 or 2 (left or right)
 * Output:
 *      win or loss
 */
void guessha(){
    srand(time(NULL));
	int guess;
        int correct=0;
	
	do{
                cout<<"In one of my hands is a half-dollar"<<endl;
		cout<<"Guess which hand I am holding it in"<<endl;
		cout<<"Left or Right? (1 or 2)"<<endl;
		cin>>guess;
		
		if(!cin)
			break;
			
		int hand=rand()%2+1;
		
		string LeftorR;
		if (hand==1)
			LeftorR = "right";
		else
			LeftorR = "left";
			
		if (guess == hand){
                        correct++;
			cout<<"Correct, its in my " <<LeftorR<<" hand "<<endl<<endl;
                        cout<<"Total correct: "<<correct<<endl;
                }
               else if (guess != hand){
			cout<<"Sorry, its in my " <<LeftorR<<" hand."<<endl<<endl;
                        cout<<"Total correct: "<<correct<<endl;
               }
                if (correct==10)
                    break;
            }while (guess !=1 || guess !=2);
}

/******************************************************
 ****************picknum*******************************
 ******************************************************
 * Purpose:  Guess which hand the item is in
 * Input:
 *      1 thru 10 
 * Output:
 *      win or loss
 */
void picknum(){
    srand(time(NULL));
	int guess;
        int correct;
	
	do{
                cout<<"I'm thinking of a number between 1 and 10"<<endl;
		cout<<"Guess which number I am thinking of (1-10)"<<endl;
		
		cin>>guess;
		
		if(!cin)
			break;
			
		int answer=rand()%10+1;
		
				
		if (guess > answer){
                        cout<<"Too high, it was " <<answer<<endl<<endl;
                        cout<<"Total correct: "<<correct<<endl;
                }
		else if (guess < answer){
			cout<<"Too low, it was " <<answer<<endl<<endl;
                        cout<<"Total correct: "<<correct<<endl;
                }
                else if (guess==answer){
                    correct++;
                    cout<<"correct!";
                    cout<<"Total correct: "<<correct<<endl;
                }
                if (correct==5)
                    break;
	}while (guess<=10);
}

/******************************************************
 ****************rocscip*******************************
 ******************************************************
 * Purpose:  Play rock scissors paper
 * Input:
 *      rock, scissors or paper
 * Output:
 *      win or loss
 */
void rocscip(){
    do{
		string choice;
		
		int comp;
                int correct=0;
              		
		cout<< "Welcome to Rock, Paper, Scissors!"<<endl<<endl;
		cout<< "Play against the computer for a chance to win!"<<endl;
		cout<< "Please choose rock, paper, scissors or quit"<<endl;
		
		cin>>choice;
		
		cout<<"You: "<<choice<<endl;
		
		srand(time(0));
		
		comp=rand() %10+1;
		
		if (comp <=3)
		{
			cout<<"Computer: Rock"<<endl;
		}
		else if(comp<=6)
		{
			cout<<"Computer: Paper"<<endl;
		}
		else if (comp>=7)
		{
			cout<<"Computer: Scissors"<<endl;
		}
		

		if((choice=="rock" && comp>=7) || (choice=="paper" && comp<=6) || (choice=="scissors" && comp<=3))
		{
                    cout<<"You win!" <<endl<<endl;
                    correct++;
                    cout<<"Total wins: "<<correct<<endl;
                            
                }
                else
                {
                    cout<<"You lose!"<<endl<<endl;
                    cout<<"Total wins: "<<correct<<endl;
                }
	} while (cin.get());
       
	cin.get();
}

//Solution to problem 5
void war(){
  
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


//Solution to problem 6
void gauntlet(){
    

    cout<<"You have chosen to run the gauntlet.\n "<<endl<<endl;
    cout<<"Good Luck     Please press enter."<<endl;
    int inN;
    clock_t start;
     inN=getN();
        switch(inN){
        start = clock();
        case 9: cointos();
    int inN;
    clock_t start,finish;
    
        inN=getN();
        switch(inN){
        start = clock();
        case 9: cointos();
        case 10: guessha();
        case 11: picknum();
        case 12: rocscip();
        finish = clock();
     
     HighSco();
             default:;


}
        }
}


void CollDat(ofstream& fout)
{
	string name = "", date = "", score = "";
	
	do
	{
		cout << "Enter the first 4 letters of your name" << endl;
		cin >> name;
		cout << "Enter the score" << endl;
		cin >> score;
		cout << "Enter the date (mm/dd/yy) "<< endl;
		cin >> date;
		fout << name << " " << score << " " << date << endl;
	} while (name != "quit" || score != "quit" || date != "quit");
	  // type "quit" for name, score, or date to stop
}

void DispDat(ifstream& fin)
{
	string line = "";
	while (!fin.eof())
	{
		getline(fin, line, '\n');
		cout << line << endl;
	}

}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}