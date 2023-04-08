#include<bits/stdc++.h>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    int sp=pow(n-1);
    int bp = 2*sp;
    return bp;
}
int main(){
    int x;
    cin>>x;
    cout<<pow(x)<<endl;

    return 0;
}
