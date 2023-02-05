#include<iostream>
using namespace std;
int f(int n){
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    
    int fib1=f(n-1);
    int fib2=f(n-2);
    int fib = fib1+fib2;
    return fib;
}
int main(){

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<f(i+1)<<"  ";
    }
    




    return 0;
}