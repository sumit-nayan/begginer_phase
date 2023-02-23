#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    vector<vector<int>> f;
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 3; j++)
        {
            temp.push_back(1);
        }
        f.push_back(temp);
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while (v[i][j]--)
            {
                
            }
        
            
        }
        
    }
    


    return 0;
}