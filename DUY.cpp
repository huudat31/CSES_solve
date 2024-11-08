#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    if(n%4==3){
        cout<<"YES"<<endl;
        cout<<(n-3)/2 +2<<endl;
        cout<<"1 2 ";
        for(int i=4,j=7;j<=n;i+=4,j+=4){
            cout<<i<<" "<<j<<" ";
    }
    cout<<endl<<(n-3)/2 +1<<endl;
    cout<<"3 ";
    for(int i=5,j=6;j<=n;i+=4,j+=4){
            cout<<i<<" "<<j<<" ";
    }
    }
    else if(n%4==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        cout<<"1 4 ";
         for(int i=5,j=8;j<=n;i+=4,j+=4){
            cout<<i<<" "<<j<<" ";
 
 }       cout<<endl<<n/2<<endl;
        cout<<"2 3 ";
         for(int i=6,j=7;j<=n;i+=4,j+=4){
            cout<<i<<" "<<j<<" ";
    }
    }
    else{
        cout<<"NO"<<endl;
    }





}
