#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector <int>> v;
    for (int i = 0; i < 5; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v[i][j]==1){
                cout<<abs(2-i)+abs(2-j);
            }
        }
        
    }
    
    



    return 0;
}