#include<iostream>
using namespace std;

void totalAmount(string day , int amount);

main()
{
string days;
int amount;
  while(true)
  {
	cout << "Enter Day : ";
	cin >> days;
	cout << "Enter Amount : ";
	cin >> amount;
	totalAmount(days , amount);
  }
}


 void totalAmount(string day , int amount)
 { 
  if(day == "sunday")
  { 
   int discount= 0.1*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  } 
  if(day == "monday")
  {
  cout << "Amount : " << amount <<endl;
  }
  if(day == "tuesday")
  {
  cout << "Amount : " << amount <<endl;
  
  }
  if(day == "wednesday")
  {
  cout << "Amount : " << amount <<endl;
  }
  if(day == "thursday")
  {
  cout << "Amount : " << amount <<endl;
  }
  if(day == "friday")
  {
  cout << "Amount : " << amount <<endl;
  
  }
  if(day == "saturday")
  {
  cout << "Amount : " << amount <<endl;
  }
 }
