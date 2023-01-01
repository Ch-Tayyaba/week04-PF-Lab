#include<iostream>
using namespace std;
void greaterNumber(int number01 , int number02);

main()
{
int number1;
int number2;
while(true)
  {
	cout << "Enter First Number : ";
	cin >> number1;
	cout << "Enter Second Number : ";
	cin >> number2;
	greaterNumber(number1,number2);
  }
}


void greaterNumber(int number01 , int number02)
{
	if(number01>number02)
	{ 
  	  cout << "Number : "<< number01 << endl;
   	}
 	if(number01<number02)
  	{ 
   	  cout << "Number : "<< number02 << endl;
  	}
}
