#include<iostream>
using namespace std;
void p(int a[],int s, int e){
    if (s>=e)
    {
        return;
    }
    int c=0;
    for (int i = 0; i < e; i++)
    {
        if (a[0]<a[i]) //Decreasing
        {
            c++;
        }
    }
    int w,u;
    w=a[c];
    a[c]=a[0];
    a[0]=w;
    int i=0,j=e;
    while(i!=c){
    if (a[i]>a[c])
    {
        i++;
    }else if (a[j]<a[c])
    {
        j--;
    }else if(a[i]<a[c] && a[j]>a[c])
    {
        u=a[i];
        a[i]=a[j];
        a[j]=u;
    }
    }
    }
void qs(int a[],int s,int e){
    if (s>=e)
    {
        return;
    }
    int c=0;
    for (int i = s; i < e; i++)
    {
        if (a[0]<a[i])
        {
            c++;
        }
        
    }
    
    p(a,s,e);
    qs(a,s,c-1);
    qs(a,c+1,e);
    
}
int main(){
    //int a[]={3,6,4,2,5,4,7,4,7,321,0,5,8,433,5,4,2,67,9,4,2,0};
    int a[]={3,5,2,1,7};
    qs(a,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}