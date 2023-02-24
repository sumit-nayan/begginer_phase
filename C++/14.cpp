#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int index=0;
    int ls=0;
    int rs=0;
    do{
        for(int i=0;i<index;i++){
            ls=ls+nums[i];
        }
        for(int i=nums.size()-1;i>index;i--){
            rs=rs+nums[i];
        }
        index++;
    }while(ls!=rs);
    return index;
}

   

int main(){
    
    vector<int> v = {1,7,3,6,5,6};
    pivotIndex(v);
    return 0;
}
