#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        
       if(s[i]=='.'){
            v.push_back(0);
        }
        if(s[i]=='-'&&s[i+1]=='.'){
            v.push_back(1);
            i++;
        }
        if(s[i]=='-'&&s[i+1]=='-'){
            v.push_back(2);
            i++;
        }
        
        

    }
    for(auto i:v){
        cout<<i;
    }
    



    return 0;
}