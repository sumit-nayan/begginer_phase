#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* p= new int[n];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter "<<(i+1)<<"th number:";
        cin>>p[i];
    }
    
    int max=-1;
    for (int i = 0; i < n; i++)
    {
        if (max<p[i])
        {
            max=p[i];
        }
        
    }
    cout<<max;
    

    return 0;
}