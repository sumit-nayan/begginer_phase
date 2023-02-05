#include<iostream>
using namespace std;
int length(char s[]){
    if (s[0]=='\0')
    {
        return 0;
    }
    int ans=length(s+1);
    return ans+1;
    
}
int main(){
    char a[1000];
    cin>>a;
    cout<<length(a)<<endl;
}