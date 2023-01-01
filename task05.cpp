#include<iostream>
using namespace std;

void evenOdd(int num);

main()
{
while(true)
{
int number;
cout << "Enter a number : ";
cin >> number;
evenOdd(number);
}
}

void evenOdd(int num)
 {
  if(num%2 == 0)
   {  
   cout << "Number is Even." <<endl;
   }
   if(num%2 == 1)
   {
    cout << "Number is Odd" <<endl;
   }

 }