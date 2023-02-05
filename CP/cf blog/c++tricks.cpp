#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p;
    vector<int> v;
    p = {3,4};
    v = {5,6};

    pair<int, pair<char,long long>> p1;
    p1 = {2,{'s',56565}};

    cout<<"Vector"<<endl;
    vector<int> v1;
    v1 = {1,2,4,3,4,3,6};
    for(auto i :v1)
        cout<<i<<' ';
    cout<<endl<<endl;

    
    cout<<"deque"<<endl;
    deque<vector<pair<int,int>>> d;
    d = {{{1,2},{4,5},{7,8}},{{1,1},{2,4},{3,9}}};
    for(auto i :d){
        for(auto j : i)
            cout<<j.first<<" "<<j.second<<"     ";
        cout<<"-\n";
    }
    cout<<endl<<endl;



    cout<<"Set\n";
    set<int> s;
    s = {3,4,3,4,6,4,5,3,6,3,6,67,4,3,5,3,};
    for(auto i : s)
        cout<<i<<" ";
    cout<<endl;
    cout<<endl<<endl;

   
    cout<<"Array"<<endl;
    array<int, 6> a;
    a = {1,2,3,4,5,6};
    for(auto i : a)
        cout<<i<<"  ";
    cout<<endl;
    cout<<endl<<endl;

    
    cout<<"tuple"<<endl;
    tuple<int, int, char> t;
    t = {1,5,'r'};
    /* Can't use for loop in tuple*/
    cout<<get<0>(t)<<"  ";
    cout<<get<1>(t)<<"  ";
    cout<<get<2>(t)<<"  ";
    cout<<endl;
    cout<<endl<<endl;

    cout<<"These type of initation can't be done in stack and queue";
    


    /* Hidden Function*/
    cout<<"Hidden function"<<endl;
    cout<<"GCD: "<<gcd(6,9)<<endl;
    return 0;
}