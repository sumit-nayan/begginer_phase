#include<bits/stdc++.h>
using namespace std;
int max_revenue(vector<int> &p,int n){
    vector<int> r(n+1,INT_MIN);
    return memo(p,n,r);
}
int memo(vector<int> &p,int n,vector<int> &r){
    int q;
    if(r[n]>=0){return r[n];}
    if(n==0){return 0;}
    else{
        q=INT_MIN;
        for(int i=1;i<=n;i++){
            q=max(q,p[i-1]+memo(p,n-i,r));
        }
    }
    r[n]=q;
    return q;
    }

int main(){



    return 0;
}