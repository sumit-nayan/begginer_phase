#include<iostream>
using namespace std;
int fun(int n){
    static int x=0;
    if (n>0)
    {
        x++;
        return fun(n-1)+x;
    }
    return 0;
    
}
int fun2(int n){
    static int x=0;
    if (n>0)
    {
        x++;
        return x+fun(n-1);
    }
    return 0;
    
}
int main(){

int x=5;
cout<<fun(x)<<endl;
cout<<fun2(x)<<endl;


    return 0;
}