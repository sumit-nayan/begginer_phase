#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
        int n;
        cin>>n;
        int x=0;
        while((x*(x+1)/2)<n){
            x++;
        }
        if((x*(x+1)/2)>n){
            x--;
        }
        int r = n - (x*(x+1)/2);
        cout<<"x :"<<x<<endl;

        vector<int> v;
        for (int i = 0; i < x; i++)
        {
            v.push_back(i+1);
        }
        int a=0,b=0;

        for (int i = 0; i < v.size(); i = i+3)
        {
            a = a + v[i];
            b = b + v[i+1]+v[i+2];
        }
        
        cout<<a<<" "<<b<<endl;
        }

        
    




    return 0;
}