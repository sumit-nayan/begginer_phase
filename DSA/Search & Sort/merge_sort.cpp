#include<iostream>
using namespace std;
void merge(int a[],int s,int mid,int e){
    if (s>=e)
    {
        return;
    }
    int b[e];
    if (a[s]>a[mid+1])
    {
        b[s]=a[s];// Array B mein copy nhi kr pa rhe?
        merge(a,s+1,mid+1,e);
    }
    else
    {
        b[s]=a[mid+1];
        merge(a,s,mid+2,e);
    }
    for (int i=s; i <=e; i++)
    {
        a[i]=b[i];
    }
    
}
void merge_sort(int a[],int s,int e){
    if (s>=e)
    {
        return;
    }
    int mid = (s+e)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);
    merge(a,s,mid,e);
}
int main(){
    
    
    /*int a[5]={9,8,7,6,5};
    merge_sort(a,0,4);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }*/


   int a[]={4,3,2,1,9,7,4,1};
    merge(a,0,3,7);
    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<endl;
    }
    
    


    return 0;
}