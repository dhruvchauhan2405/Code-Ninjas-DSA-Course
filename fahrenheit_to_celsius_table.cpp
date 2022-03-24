#include<iostream>
using namespace std;


int main(){

    int S,E,W;
    int f;
    cin>>S>>E>>W;
    for(int i=S;i<=E;i=i+W)
    {
        cout<<i<<" ";
        f=(5*(i-32))/9;
        cout<<f<<endl;
    }
    return 0;
  
}
