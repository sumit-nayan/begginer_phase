#include<bits/stdc++.h>
using namespace std;

int main(){
    
    pair<int,string> p;
    p = make_pair(2,"abc"); // or p={2,"abc"}; // inn dono tarike se bhi pair initate hota hai
    pair<int,string> &p1=p; // & nhi daaloge toh copy hogi and & daalne se references jayegi
    p1.first = 3; // agar uppar min reference nhi daalte toh ye wala change nhi hota

    cout<<p.first<<"  "<<p.second<<endl;



    // We will make array of pairs

    int a[]={1,2,3};
    int b[]={21,22,23};//how we can relate array a and b so we use pair for this

    pair<int,int> p_array[3]; // Initation of array of pair just [] wala symbol lga do

    p_array[0]={1,21};  // We can access array in this way
    p_array[1]={2,22};
    p_array[2]={3,23};

    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl; //Iss tarah se cout krwa skte hain and cin bhi krwa skte hain
    }
    
    //We can operate together on function like swapping

    swap(p_array[0],p_array[2]); // Here we operated swapping between 1st and 3rd on both array 

    cout<<"After swapping :"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
    }



}