#include<iostream>
#include<cmath>
using namespace std;
int main() {
   int basic;
   cin>>basic;
   
   double allow,total,da,hra,pf;
   hra=0.2*basic;
   da= 0.5*basic;
   char ch;
   cin>>ch;
   switch(ch)
   {
       case 'A':
       allow = 1700;
       break;
       case 'B':
       allow = 1500;
       break;
       default:
       allow =1300;
   }
    pf= 0.11*basic;
    total= (basic+hra+da+allow)-pf;
    total = round(total);
    // cout<<hra<<da<<pf<<endl;
    // cout<<allow;
    cout<<(int)total;
   return 0;
}