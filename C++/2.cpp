#include<iostream>
using namespace std;
int sum(int n) {
    int sum,sum1;
    sum = n + sum1;
    sum1 = sum(n-1);
    
    return sum;



};
int main() {
    
    int n;
    cin>>n;
    int sum;
    sum = sum(n);

    return 0;
}