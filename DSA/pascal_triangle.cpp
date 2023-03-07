#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate_pascle_triangle(int n){
    vector<vector<int>> v(n); // This means outer vector(or row) has n element but inner vector (or column) size is not defined

    for (int i = 0; i < n; i++)
    {
        v[i].resize(i+1);
        v[i][0]=1;
        for (int j = 1; j < i; j++)
        {
            v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
        v[i][i]=1;
        
    }
    return v;
    
    

}
int main(){

    int numRows = 100;
    vector<vector<int>> triangle = generate_pascle_triangle(numRows);

    for (int i = 0; i < triangle.size(); i++) {
        for (int j = 0; j < triangle[i].size(); j++) {
            cout << triangle[i][j] << " ";
        }

        cout << endl;
    }


    return 0;
}