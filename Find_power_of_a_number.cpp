#include<iostream>
using namespace std;
int main() {
   int n,x;
   cin>>x>>n;
   int p=1;
   int i;
   for(i=1;i<=n;i++)
   {
       p =p*x;
   }
   cout<<p;

   return 0;
}