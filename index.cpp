#include<bits/stdc++.h>

using namespace std;


int main (){
     int n;
     cin >> n;
     vector<int> ans;
     for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        ans.push_back(a);
     }
     long long answer = 0;
     long long pointer = ans[0];
     for(int i = 1;i<n;i++){
        if(ans[i] < pointer){
            answer += pointer - ans[i];
            // pointer = arr[i];
        }
        else{
            pointer = ans[i];
        }
    }
    cout<< answer;
}