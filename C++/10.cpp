#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{

    vector<int> v={2,4,5,6,4,3,3,6,7,2};
    v.push_back(234);
    v.push_back(654);
    v.pop_back();


    cout<<"Using Iterator\n";
    auto itr = v.begin();
    for (itr; itr!=v.end(); itr++)
      {  cout<<*itr<<endl;}
    
    
    
    cout<<"Using for each loop\n";
    for(int x:v)
        cout<<x<<endl;
    

    return 0;
}