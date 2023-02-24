#include<bits/stdc++.h>
using namespace std;
// void setZeroes(vector<vector<int>>& matrix) {
//         // vector<pair<int,int>> v;
//         // int n=0;
//         for (int i = 0; i < matrix.size(); i++)
//         {
//             for (int j = 0; j < matrix[i].size(); j++)
//             {
//                 if(matrix[i][j]==0){
//                     // v.push_back(make_pair(i,j));
//                     // n+=n;
//                     for (int k = 0; k < matrix[i].size(); k++)
//                     {
//                         matrix[i][k]=0;
//                     }
//                     for (int k = 0; k < matrix.size(); k++)
//                     {
//                         matrix[k][j]=0;
//                     }
                    
                    
//                 }
//             }            
//         }
//         return;

// The logic of your code is  wrong. The problem is that when you find a 0 in the matrix, you are setting the entire row and column to 0. However, if you do this for every 0 in the matrix, you will end up setting many rows and columns to 0 multiple times, which is not necessary.

// A more efficient solution is to first check which rows and columns have 0s, and then set them to 0 all at once. To do this, you can use two arrays to keep track of which rows and columns have 0s, and then set them to 0 in a separate loop.

void setZeroes(vector<vector<int>> &matrix){
    int m = matrix.size();
    int n = matrix[0].size();

    // Arrays to keep track of which rows and columns have 0s
    //Dhyan rhe hmne yahan bas row and column ko track kiya hai poora exact coordinate ka nhi qki zarurat nhi hai//baad mein sabko zero krna hi hai toh
    // bool rowzero[m] = {false};
    // bool columnzero[n] = {false};
    // the arrays rowzero and columnzero are declared using the variable m and n, respectively, which are not constant expressions. This is not allowed in standard C++, but some compilers might allow it as an extension.
    vector<bool> rowzero(m,false);
    vector<bool> columnzero(n,false);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrix[i][j]==0){
                rowzero[i]=true;
                columnzero[j]=true;
                //jahan jahan zero hai usse true kr
            }
        }   
    }

    //making row zero
    for (int i = 0; i < m; i++)
    {
        if(rowzero[i]){
            for (int j = 0; j < n; j++)
            {
                matrix[i][j]=0;
            }  
        }
    }

    //making column zero
    for (int j = 0; j < n; j++)
    {
        if(columnzero[j]){
            for (int i = 0; i < m; i++)
            {
                matrix[i][j]=0;
            }
            
        }
    }

    return;
    
    
    

    
}       
        
        

        

int main(){

    vector<vector<int>> v = {{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<"    ";
        }
        cout<<endl;
    }
    

    return 0;
}