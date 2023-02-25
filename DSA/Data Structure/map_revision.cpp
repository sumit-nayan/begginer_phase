#include<bits/stdc++.h>
using namespace std;
int main(){

    //Creation
    unordered_map<string,int> m; //string is key here and int is value

    //The main difference between an ordered map and an unordered map in C++ is the way they store and retrieve their key-value pairs.
    
    //Ordered map (If the order of the keys is important and search time is a critical factor, an ordered map is a better choice.)
    //An ordered map, also known as a map, is an associative container that stores key-value pairs in a sorted order based on the keys. 
    //The keys are unique and used to access the corresponding values. It is implemented as a balanced binary search tree (BST), where the keys are sorted in ascending order. 
    //The advantages of a map include faster search time and ordered iteration of the keys.

    //Unordered map ( If the order of the keys is not important and faster insertion and deletion time is a critical factor, an unordered map is a better choice.)
    //an unordered map, also known as a hash map, is an associative container that stores key-value pairs in an arbitrary order. 
    //It is implemented as a hash table, where the keys are hashed to retrieve the corresponding values. The keys are unique and used to access the corresponding values. 
    //The advantages of an unordered map include faster insertion and deletion time, and constant-time average search time.



    //insertion
    //1
    pair<string,int> p1 = make_pair("Sumit", 1);
    m.insert(p1);

    //2
    pair<string,int> p2("Nayan",2);
    m.insert(p2);

    //3
    m["Singh"] = 1;
    //what will happen?
    m["Singh"] = 2;
    //first wale mein creation and second mein same key rha then updation; qki ek key ke correspoding ek hi value hogi




    //search
    cout<<m["Sumit"]<<endl;
    cout<<m.at("Nayan")<<endl;

    // cout<<m.at("Unknown Key")<<endl;
    cout<<m["Unknwon Key"]<<endl; //ye wala zero de diya unknown pe but m.at() nhi dega zero;
    //qki m["Unknown Key"] likhne se ek new entry ban jati hai for "Unknwon key" ke naam se and uske corresponding zero value deta hai
    //and now ab hum m.at() se function likhe then zero return krega qki "Unknwon Key" naam se key ban gyi hai
    cout<<m.at("Unknwon Key")<<endl;

    cout<<m.at("Singh")<<endl;
    cout<<endl;



    
    //size
    cout<<m.size()<<endl; //qki cout<<m["Unknwon key"] likh ke new entry banayi thi
    cout<<endl;




    //To check presence ki particular key pdi hui hai ya nhi
    cout<<m.count("Bro")<<endl; //Jo key nhi hoti hai usme m.count() zero return krta hai
    cout<<m.count("Sumit")<<endl;//Agar present rha then 1 return krega
    cout<<endl;




    //erase
    m.erase("Unknwon Key"); 
    cout<<m.size()<<endl;
    cout<<endl;




    //Itreation using for loop
    for(auto i:m){
        cout<<i.first<<"  "<<i.second<<endl;
    }
    cout<<endl;



    //Iterator
    unordered_map<string, int> :: iterator it = m.begin(); 
    while(it!=m.end()){
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }

    //Tum gaur kiye hoge ki yayah jis order mein key banaye the uss order mein nhi print ho rha hai qki unordered map mein nhi hota hai
    //But agar isse sirf ordered map bna diye then sorted order mein print hoga
    //Iss code ko ordered map bna skte ho bas 2 gajah change kr ke ek creation and doosra jahan itetaor banaye the bas wahan unordered_map hta ke map kr do

    //The main difference between an ordered map and an unordered map in C++ is the way they store and retrieve their key-value pairs.

    return 0;
}
