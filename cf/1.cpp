#include<bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin>>c;
    set<char> s;
    for (int i = 0; i < c.length(); i++)
    {
        s.insert(c[i]);
    }
    
    if(s.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
}