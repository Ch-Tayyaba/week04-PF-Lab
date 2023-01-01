#include<iostream>
using namespace std;

void add(int number01 ,int number02);
void multiplication(int number01 , int number02);
void subtraction(int number01 , int number02);

main()
{
int number1;
int number2;
char operation;
while(true)
{
cout << "Enter 1st Number : ";
cin >> number1;
cout << "Enter 2nd Number : ";
cin >> number2;
cout << "Enter your choice of operation : ";
cin >> operation;
if(operation == '+')
 {
  add(number1 , number2);
 }
if(operation == '*')
 {
  multiplication(number1 , number2);
 }
if(operation == '-')
 {
  subtraction(number1 , number2);
 }
if(operation == '/')
 {
  cout << "Operation not applicable." << endl;
 }
}
}
 void add(int number01 , int number02)
  {
   int sum;
   sum = number01 + number02;
   cout << "Sum : " << sum << endl;
  }

 void multiplication(int number01 , int number02)
  {
   int multiply = number01 * number02;
   cout << "Product : " << multiply << endl;
  }

 void subtraction(int number01 , int number02)
  {
   int subtract = number01 - number02;
   cout << "Subtraction : " << subtract << endl;
  }