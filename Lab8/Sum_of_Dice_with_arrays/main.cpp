/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2012, 10:02 AM
 * Sum of Dice with arrays
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

bool fillArray(int [],int);
void printArray(int [],int,int);
int rollDice(int,int);

int main(int argc, char** argv) {
    //Initialize important variables
    srand(static_cast<unsigned int>(time(0)));
    const int FACES=6,SIZE=2*FACES+1;
    int freq[SIZE];
    //Fill the Array with Zeroes
    cout<<"Did the array get initialized properly ->";
    cout<<(fillArray(freq,SIZE)?"Yes":"No")<<endl;
    //Print the Array to check initialization
    printArray(freq,SIZE,1);
    //Throw the dice and check the statistics
    int throws=FACES*FACES*1000;
    for(int rolls=1;rolls<=throws;rolls++){
        freq[rollDice(1,FACES)]++;
    }
    //Print the results after the throws
    printArray(freq,SIZE,1);
    return 0;
}

void printArray(int a[],int n,int perLine){
    cout<<endl;
    for(int i=2;i<n;i++){
        cout<<i<<"->"<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

bool fillArray(int a[],int n){
    if(n<2||n>10000)return false;
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    return true;
}

int rollDice(int strt,int end){
    int die1=rand()%end+strt;
    int die2=rand()%end+strt;
    return die1+die2;
}

