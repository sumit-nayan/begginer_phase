#include<bits/stdc++.h>
using namespace std;
int main(){
    
    double n;

    vector<double> v;

    while(n!=EOF){
        cin>>n;
        v.push_back(n);
    } 

    for (int i = v.size()-1; i >= 0; i--)
    {
        cout<<fixed<<setprecision(4)<<sqrt(v[i]);
    }
    



    return 0;
}