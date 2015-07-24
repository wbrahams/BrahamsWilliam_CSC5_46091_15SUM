/*
 * File: main.cpp
 * Author: William Brahams
 * Created on: July 17, 2015, 7:30 PM
 * Purpose: Project 1*/

//System Libraries
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>
#include <stdio.h>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void cointos();
void guessha();
void picknum();
void rocscip();
void war();
void gauntlet();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
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
            default:;
        };
    }while(inN<7);
    do{
         Menu();
        inN=getN();
        switch(inN){
        case 8: gauntlet();
        case 9: cointos();
        case 10: guessha();
        case 11: picknum();
        case 12: rocscip();
             default:;
        };
    }while(inN>7);
    
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Welcome to the Griswald Cheapo Casino, where 'none of these"<<endl;
    cout<<"games are found at the Mirage!"<<endl<<endl<<endl;
    cout<<"Type 1 for Coin Toss"<<endl;
    cout<<"Type 2 for Guess Which Hand"<<endl;
    cout<<"Type 3 for Pick a Number"<<endl;
    cout<<"Type 4 for Rock, Scissor, Paper"<<endl;
    cout<<"Type 5 for War"<<endl;
    cout<<"Type 9 to run the first 4 for a time trial"<<endl;
    cout<<"Type 7 to exit \n"<<endl;
    
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
		
		srand(time(NULL));
		
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
    cout<<"This function will be completed for project 2"<<endl<<endl;
}

//Solution to problem 6
void gauntlet(){
    cout<<"You have chosen to run the gauntlet.\n "<<endl<<endl;
    cout<<"Good Luck     Please press enter."<<endl;}


//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}