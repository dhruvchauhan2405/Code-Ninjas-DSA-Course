#include<iostream>
using namespace std;
int main() {
   int n;
   // cout<<"Enter n"<<endl;
   cin>>n;

   int i=1;
   int j;
   int count=1;
   while(i<=n)
   {    j=1;
        count=i;
       while(j<=i)
       {
           cout<<count;
           count++;
           
           j++;
       }
       cout<<endl;
       i++;
   }
   return 0;
}