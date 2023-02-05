#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,d,e,f;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        d+=a;
        e+=b;
        f+=c;
    }
    cout<<(d|e|f?"NO":"YES");


}