#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
    
}

int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<fib(i)<<" ";
    }

    return 0;
}