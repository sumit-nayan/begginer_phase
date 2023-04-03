#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int x){ // sare mein jake search kr lo
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int n, int x){
    int i=0,j=n-1;
    
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            j=mid-1;
        }else if(arr[mid]<x){
            i=mid+1;
        }
    }
    return -1;
}


int main(){
    int a[5];
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    cout<<"x";
    int x;
    cin>>x;
    cout<<linear_search(a,5,x)<<endl;
    cout<<binary_search(a,5,x)<<endl;


    return 0;
}