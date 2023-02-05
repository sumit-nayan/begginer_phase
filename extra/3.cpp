#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    for(int i=0;i<n-1;i++){
        if(s[i]!=s[i+1]){
            v.push_back(s[i]);
        }
    }
 
    
    v.push_back(s[n-1]);
    
    cout<<n-v.size();

    
    

    return 0;
}