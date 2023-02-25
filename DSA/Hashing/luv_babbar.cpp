#include<bits/stdc++.h>
using namespace std;
int maximum_no_of_reaccurences_of_string_1(string s){ //Only small case alphabet

    vector<int> v(26,0);
    for (int i = 0; i < v.size(); i++)
    {
        char ch = s[i];
        v[ch-'a']++; //yahan hmne a ko 0 se, b ko 1 se ..... map krwa diya
    }
    return *max_element(v.begin(),v.end());   
}
int main(){

    string s;
    cin>>s;
    cout<<maximum_no_of_reaccurences_of_string_1(s);


    return 0;
}