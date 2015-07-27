#include<iostream> 
using namespace std;

int main()

{

int numbers[10]={13579,26791,26792,33445,55555,
62483,77777,79422,85647,93121};
int i,win=-1, n;


cout << endl << "Please enter this week's 5-digit winning lottery number: ";
cin>>n;

for(i=0;i<10;i++)

if(n==numbers[i])
{
cout <<" You have a winning ticket.\n";
win=i;
}
if(win<0)
cout<<"You did not win this week.\n" << endl;

return 0;
}