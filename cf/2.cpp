#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char> v;
    string x,y;
    cin>>x;
    cin>>y;
    transform(x.begin(),x.end(),x.begin(),::tolower);
    transform(y.begin(),y.end(),y.begin(),::tolower);
    
    for (int i = 0; i < x.length(); i++)
    {
        if(x[i]>y[i]){
            cout<<"1";
            return 0;
        }
        if(y[i]>x[i]){
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
    





    return 0;
}