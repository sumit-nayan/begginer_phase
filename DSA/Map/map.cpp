#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> m){
    cout<<"Size of map :"<<m.size()<<endl;
    for(auto &pr : m){     //log(n) time is to access one element of map so, here final time complexity is nlog(n)
        cout<<pr.first<<"  "<<pr.second<<endl; //We uses pr.first because pr mein ek pair copy hai map ka
    }
}
int main(){
    //Defult meaning of map is ordered map
    cout<<"Initalition of map"<<endl;
    map<int,string> m; //Initalition of map// int is key and string is value//key unique hoga// and key and value kuch bhi ho ksta hai like vector,set and other container also
    m[1] = "abc";  //O(log(n)); also take O(log(n)) time if you write m[6]// Time complexity of accessing of map is also log(n)
    m[5] = "der";
    m[3] = "wefr";
    m[12];   //This also take log (n) time and default value will be zero
    m[5] = "dfs"; //Ye input new key create nhi krega qki m[5] create ho chuki hai and ye bas m[5] ko update kr dega
    m.insert({4,"sdqf"});    //This is how we can also add element in map // There is pair in map so we use {} to initalize pair    
    print(m);
    //You will notice that sorted way key mein print hua hoga; this is a property of ordered map;Bina kuch likhe hone pe ordered map hi hota hai
    cout<<endl<<endl;


    //map.find() // log(n)
    cout<<"m.find()"<<endl;
    auto it  = m.find(3); // Ye 3 find krega key mein map mein and uska itarater return krega and agar 3 nhi hoga then m.end() ka itrater retrun krega
    if(it == m.end()){
        cout<<"No value";
    }
    else{
        cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<endl<<endl;


    //map.erase()// log(n)
    //m.erase() works in both ways either by taking input of key or by taking input of itrater
    cout<<"m.erase by taking input of key"<<endl;
    m.erase(1); // By giving input of key
    print(m);
    cout<<endl;

    cout<<"m.erase by taking input of itrater"<<endl;
    auto it1 = m.find(5);
    m.erase(it1);
    print(m);
    cout<<endl<<endl;

    // Agar maan lo aisa itrater diya jo kahin point nhi (m.find se nikal skte hain jo m.end pe point krta hai just outside of ma) kr rha and usse m.erase krne gye then segmentation fault de dega
    // For caution purpose m.erase se phle se ye lga skte hain ki if(it!=m.end) then hi erase krna

    //m.clear
    cout<<"m.clear";
    m.clear();
    print(m);
    cout<<endl<<endl;

    return 0;
}