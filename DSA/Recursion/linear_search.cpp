#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    cout<<"Size of array is:"<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool ls(int arr[], int n, int x){
    print(arr,n);//iss se bas ache se dikhega ki jab arr[0] pe element aa gya then function ruk gya and true return kr diya
    //and ye bhi dikega ki array and size pass kaise hota hai in recursive call
    if(n==0){
        return false;
    }
    if(arr[0]==x){
        return true;
    }else{
        return ls(arr+1,n-1,x);
    }
}
int main(){

    int arr[5]={1,5,3,8,9};
    if(ls(arr,5,3)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    cout<<endl<<endl;

    if(ls(arr,5,13)){
        cout<<"found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }
    return 0;
}