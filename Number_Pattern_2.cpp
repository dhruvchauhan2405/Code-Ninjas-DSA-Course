#include<iostream>
using namespace std;
int main() {
   int n;
   // cout<<"Enter n"<<endl;
   cin>>n;

   int i=1;
   int j;
   int count;
   int k;
   while(i<=n)
   {    j=1;
       while(j<=n-i)
       {
           cout<<" ";           
           j++;
       }
       k=1;
       count=i;
       while(k<=i) {
           cout<<count;
            count++;
            k++;
       }
       cout<<endl;
       i++;
   }
   return 0;
}
