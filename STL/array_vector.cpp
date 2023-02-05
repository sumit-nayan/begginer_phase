#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
    cout<<"Size :"<<v.size()<<"  ";      // v.size current vector ka size deta hai
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";  //v[i] likh ke vector ke uss number ke access kr skte hain but iss tarah se vector ka size increase nhi kr skte (refer CJ notes for this on DSA vector)
    }
    cout<<endl;
    
}

int main(){
    //vector<int> v1[10];  // ye ab 10 vector ban chuke hain of zero size like v[1] ek vector hai,v[2] ek vector hai aise aise 10 vector hain
    //DON'T CONFUSE WITH vector<int> v(10) isme ek hi vector banta tha of size 10 jisme zero pre filled rhta tha sare mein
    //THIS IS ARRAY of vectors
   

   // Now we will decleare N vector and will take input in that

   int N;
   cout<<"Size of array of vector :";
   cin>>N;
   vector<int> v[N]; // This is like 2D matrix in which size of rows are fixed(N) but size of column are varying.
   for (int i = 0; i < N; i++)
   {
        cout<<"Size of vector "<<i+1<<" :";
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        print_vector(v[i]);
    }
    cout<<v[0][0];   // This will also work as 0th element of 0th vcector.    This is work as matrix rows and column

    return 0;
}