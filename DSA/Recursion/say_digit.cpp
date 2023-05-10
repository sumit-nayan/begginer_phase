#include<bits/stdc++.h>
using namespace std;
void saydigit(int n,string arr[]){
    if(n==0){
        return;
    }
    int r=n%10;
    saydigit(n/10,arr);
    cout<<arr[r]<<" ";
}
int main(){
    string arr[10]={"Zero","One","Two","Three","Four",
                    "Five","Six","seven","Eight","Nine"};
    int x;
    cin>>x;
    saydigit(x,arr);



    return 0;
}