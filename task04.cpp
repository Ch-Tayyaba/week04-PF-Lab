#include<iostream>
using namespace std;
void agee(int age);
main()
 {
  int age;
  while(true)
 {
  cout << "Enter you age.";
  cin >> age;
   agee(age);
  }
 }
void agee(int age)
{ 
if(age >= 18)
  {
    cout << "You are eligible for vote." << endl;
  }
  if(age < 18)
  {
    cout << "You are not eligible for vote." << endl;
  }
}