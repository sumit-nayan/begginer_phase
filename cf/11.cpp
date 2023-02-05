#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if(s[j]=='B'&&s[j+1]=='G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
        
    }
    cout<<s;
    



    return 0;
}