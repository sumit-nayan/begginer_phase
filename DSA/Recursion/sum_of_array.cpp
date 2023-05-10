#include<bits/stdc++.h>
using namespace std;
int getsum(int arr[], int n){
    if(n==0){
        return 0;
    }
    int sp=getsum(arr+1,n-1);
    int bp=arr[0]+sp;
    return bp;
}
int main(){

    int arr[5]={1,2,6,5,43};

    cout<<getsum(arr,5)<<endl;


    return 0;
}