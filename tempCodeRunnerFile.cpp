#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0;i<n-1;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    if(a[0]!=1){
        cout<<1;
    }
    else{
        for(int i = 0;i<n-1;i++){
            if(a[i+1]-a[i]!=1){
                cout<<a[i]+1;
                break;
            }
        }
    }
}