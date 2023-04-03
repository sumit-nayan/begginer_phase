#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    int min=INT_MAX;
    int j;
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            min=arr[i];
            j=i;
        }
    }
    swap(arr[0],arr[j]);
    selection_sort(arr+1,n-1);

}

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    selection_sort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}