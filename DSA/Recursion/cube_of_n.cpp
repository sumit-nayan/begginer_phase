#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long N) {
        long long sum=0;
        if(N==0){
            return sum;
        }
        sum=sum+N*N*N;
        return sum + sumOfSeries(N-1);
    }
int main(){

cout<<sumOfSeries(5);


    return 0;
}