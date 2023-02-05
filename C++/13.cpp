#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        if(x%2==0){
            cout<<x/2<<endl;
        }
        else{
            cout<<(x+1)/2<<endl;
        }
    }

    return 0;
}