#include<iostream>
using namespace std;

void ifPass(int marks);

main()
{ 
 int marks;
 while(true)
 { 
   cout << "Enter your Quiz Marks : "; 
   cin >> marks;
   ifPass(marks);
  }
}

void ifPass(int marks)
{
 if (marks > 50)
 {
   cout << "You have passed first Quiz of PF." << endl;
 }

 if (marks == 50)
 {
   cout << "You have barely passed PF Quiz." << endl;
 }

 if(marks < 50)
 {
  cout << "You are Fail." << endl;
 }
}