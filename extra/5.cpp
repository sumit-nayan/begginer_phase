#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int n=0;
    while(y>x ||y==x){
        y = 2*y;
        x = 3*x;
        n++;
    }
    cout<<n;
}