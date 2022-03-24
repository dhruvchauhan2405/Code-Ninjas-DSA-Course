#include<iostream>
using namespace std;
int main() {
   int n;
//    cout<<"Enter n"<<endl;
   cin>>n;

   int i,j,k;
   i=1;
    while(i<=n)
   {    j=1;
       while(j<=n-i)
       {
           cout<<" ";           
           j++;
       }
       k=1;
       while(k<=2*i-1) {
           cout<<"*";
            k++;
       }
       cout<<" "<<endl;
       i++;
   }
   return 0;
}

