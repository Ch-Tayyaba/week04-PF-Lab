#include<iostream>
using namespace std;
void printName(string name);
main()
{
  string name;
  cout << "Enter Name : "; 
  cin >> name;
  printName(name);
}
 void printName(string name)
 {
    cout << "My name is : " << name << endl;
 }