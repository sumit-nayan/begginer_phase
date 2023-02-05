#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector <int>> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }
    int a=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a = a + v[j][i];
        }
        if(a!=0){
            cout<<"NO";
            return 0;
        }
        
    }
    if(a==0){
        cout<<"YES";
    }
    
    



    return 0;
}