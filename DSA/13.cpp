#include<iostream>
using namespace std;
char f(char s[],char x){
    if (s[0]=='\0'){
        return 0;}
    if (s[0]!=x){
        char a = f(s+1,x);}
    else{int i = 1;
        for (; s[i]!='\0'; i++)
        {s[i-1]=s[i];}
        s[i-1]=s[i];
        f(s,x);}   }
int main(){
    char s[100];
    cin>>s;  
    f(s,'a');
    cout<<s;
    return 0;
}