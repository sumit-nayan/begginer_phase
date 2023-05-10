#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        return is_sorted(arr+1,n-1);
    }
}
int main(){
    int arr[5]={1,2,7,4,5};
    cout<<endl;
    if(is_sorted(arr,5)){
        cout<<"Array is sorted";
    }else{
        cout<<"Array is not sorted";
    }


    return 0;
}