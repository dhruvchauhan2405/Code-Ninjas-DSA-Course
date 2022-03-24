#include<iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int digit,even,odd;
   even=0;
   odd=0;
   while(n>0)
   {
       digit=n%10;
       n=n/10;
       if(digit%2==0)
       even= even+digit;
       else
       odd= odd+digit;

   }
   cout<<even<<" "<<odd;
   return 0;
}