#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int k,n,w;
    cin>>k>>n>>w;
    if((k*(w*(w+1)/2))-n<0){
        cout<<0;
    }
    else{
        cout<<(k*(w*(w+1)/2))-n;
    }


    return 0;
}