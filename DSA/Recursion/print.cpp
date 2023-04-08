#include<bits/stdc++.h>
using namespace std;

void reachhome(int src, int des){
    cout<<"Current Position:"<<src<<" Final destination:"<<des<<endl;
    if(src==des){
        cout<<"Pooch gya";
        return;
    }
    src++;
    reachhome(src,des);
}
void print1(int n){
    if(n==0){
        return;
        
    }
    cout<<n<<" ";
    print1(n-1);
}

void print2(int n){
    if(n==0){
        return;
    }
    print2(n-1);
    cout<<n<<" ";
}
int main(){

    int x;
    cin>>x;
    print1(x);
    cout<<endl;
    print2(x);
    cout<<endl;
    cout<<endl;

    int src=0;
    int des=10;
    reachhome(src,des);
    return 0;
}