//ye galat hai, ab khojo why??
//corrected version same name ke file mein hai last mein _2 lga hoga
#include<bits/stdc++.h>
using namespace std;
int maximum_frequency(vector<int> &arr, int N){
    unordered_map<int,int> count;
    for (int i = 0; i < arr.size(); i++)
    {
        count[arr[i]]++; 
    }
    //In the first for loop, the code is iterating over the elements of the input vector arr. For each element, it is using the operator[] function of the unordered_map count to insert the element as a key and increment its value by 1.
    //The operator[] function of the unordered_map container returns a reference to the value associated with the key provided as an argument. If the key is not already present in the container, the function creates a new element with the key and a default value (which is 0 for an int), and returns a reference to that default value. In this way, the count function is effectively counting the frequency of each element in the input vector.

    int maxi = INT_MIN; // maxi is initially set to the minimum possible integer value using the INT_MIN macro. // frequency
    int ans = -1; // ans is set to -1 to indicate that no element has been found yet.//value jiska frequency maximum hai


    for(auto i : count){
        if(i.second>maxi){
            maxi = i.second;
            ans = i.first;
        }
    }
    return ans;
    

}


int main(){




    return 0;
}