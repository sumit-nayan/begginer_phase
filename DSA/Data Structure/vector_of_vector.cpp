#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    cout<<"Size :"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<vector<int>> v; // This is 2D matrix in which both rows and column size are dynamic.
    int N; //Size of rows you want to keep 
    cout<<"Size of rows:";
    cin>>N;
    for (int i = 1; i <= N; i++)
    {
        int n; // Size of column for ith rows
        cout<<"Size of column for "<<i<<" position :";
        cin>>n;
        vector<int> temp; //Yahan hum ek temprory vector decleare kr ke usme ith rows ke sare element le lete hain with usse main vector mein push_back kr denge
        for (int j = 1; j <= n; j++)
        {
            int x; //Element of [i,j]th position.
            cout<<"element for "<<i<<" row and "<<j<<" column :";
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);   //Aise banate hain vector of vector|| hmne ke vector banaye temp usse main vector v mein push back kr diya 
    }
        
    v[0].push_back(10);  //Ye krne se jo phle vector hain na vector ke uske last mein 10 add ho jayega

    v.push_back(vector<int> ());  // Ye main vector mein jake ek aur vector add ho jayega with size zero.

    //It mean hum dono add kr skte hain 
        
        
        
        
        
        
        
        
        
        
        for (int i = 0; i < v.size(); i++)
        {
            print(v[i]);
        }

        cout<<endl;
        cout<<endl;

        cout<<v[0][0]; // This will also work as matrix


        cout<<endl;



        
        

    
    




    return 0;
}