#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<string> v;

    for(int i=0;i<N;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    set<string> f;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==v[i+1]){
            f.insert(v[i]);
        }
    }
    for(auto i : f){
        cout<<i<<endl;
    }
    
    return 0;
}