#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int x;
    while(cin>>x){
        v.push_back(x);// Where plus gone here
    }
    
    
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++){
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1];


    return 0;
}