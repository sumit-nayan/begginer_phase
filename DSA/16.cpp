#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        cout<<"Size:"<<v.size()<<endl;
        cout<<"Capacity"<<v.capacity()<<endl;
        v.push_back(i+1);
    }

     for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    for (int i = 0; i < v.size(); i++)
    {
        v[i]=i*i;
    }
    

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<endl;

    }
    
    

    return 0;
}