#include<bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> v){
    cout<<"Size :"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

int main(){
    vector<pair<int, int>> v = {{1,21},{2,22},{3,23}};
    print(v);

   
    vector<pair<int,int>> v2;
    int n;
    cout<<"size of vector: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v2.push_back({x,y});     // we can also write v.push_back(make_pair(x,y))
    }
    print(v2);
    






    return 0;
}