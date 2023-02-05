#include<iostream>
using namespace std;
char f(char s[]){
    if (s[0]=='\0'){
        return 0;}
    char ans=f(s+1);
    if (s[0]!=s[1]){
        return ans;}
    else{
        int i=1;
        for (; s[i]!=0; i++)
        {s[i-1]=s[i];}
        s[i-1]=s[i];}
        }
int main(){
    char s[100];
    cin>>s;
    f(s);
    cout<<s;
    return 0;
}