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
  int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  }
  if(day == "tuesday")
  {
   int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  
  }
  if(day == "wednesday")
  {
   int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  }
  if(day == "thursday")
  {
   int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  }
  if(day == "friday")
  {
  int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  
  }
  if(day == "saturday")
  {
   int discount= 0.05*amount;
   int net = amount - discount;
   cout << "Your amount is : " << net << endl;
  }
 }
