#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v){
    cout<<"Size :"<<v.size()<<"  ";      // v.size current vector ka size deta hai
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";  //v[i] likh ke vector ke uss number ke access kr skte hain but iss tarah se vector ka size increase nhi kr skte (refer CJ notes for this on DSA vector)
    }
    cout<<endl;
    
}

void print_string_vector(vector<string> v){
    cout<<"Size :"<<v.size()<<"  ";      // v.size current vector ka size deta hai
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"  ";  //v[i] likh ke vector ke uss number ke access kr skte hain but iss tarah se vector ka size increase nhi kr skte (refer CJ notes for this on DSA vector)
    }
    cout<<endl;
    
}

int main(){
    vector<int> v; //Initation of vector | | yahan vector ka size abhi zero hai

    int n;
    cout<<"Size of your vector:"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        print_vector(v); // yahan se pta chal pa rha hoga ki push_back krne pe tumhari vector ki size badh rhi hai
        v.push_back(x); // Push back function data ko vector ke end mein add kr dega || time complexity of push_back 1 hai
    }
    print_vector(v);
    
    
    cout<<endl<<endl;


    vector<int> v1(10);  // yahan se 10 size ka vector ban gya
    print_vector(v1); // Yahan se dikh rha hoga ki 10 size ka vector ban gya and sare mein zero element bhr hua hai
    cout<<endl;
    v1.push_back(7); // Ye 11th position pe jayega *IMP* ye 11 vector ko 11 size ka bna dega and 11th position pe rhega na hi 1st position pe
    print_vector(v1);
    cout<<endl;
    cout<<endl;

    //Upar jab 10 size ka vector banaye toh sare mein 10 filled tha but hum phle se kuch aur bhi fill kr skte hain
    vector<int> v2(10,3); // Ye 10 size ka vector bna dega and 1 se leke 10th se sare mein 3 fill honge
    print_vector(v2);
    cout<<endl;
    v2.push_back(12);
    print_vector(v2);
    cout<<endl;
    v2.pop_back(); //pop_back vector last element ko nikal deta hai
    print_vector(v2);
    cout<<endl;
    cout<<endl;
    //we have advantage over array is we can copy vector
    vector<int> v3 = v; //O(n) || But ye ek expensive operation hai isliye dhayn rakhna ki agar reference pass krne se kaam chal rha hai toh copy na hi kro
    v3.push_back(6);
    print_vector(v); // yahan pe v mein change nhi aaya hoga
    cout<<endl;
    print_vector(v3);
    cout<<endl;
    cout<<endl;
    // Array mein aise nhi kr skte the || pointer kr ke krte the wo bhi ek hi array hota tha,ki ek mein change hota tha doosra bhi change ho jata tha yahan 2 different vector ban gya
    //It mean v3 new vector ban gya 


    //Delete one elment
    v.erase(v.begin() + index);
}

    //Pass by reference
    vector<int> &v4=v;
    v4.push_back(4);
    print_vector(v); //yahan pe v mein change aa gya hoga
    cout<<endl;
    print_vector(v4);
    cout<<endl;
    cout<<endl;



    // Vector of other data type like string]

    vector<string> v5;
    cout<<"Number of elements in vector of string"<<endl;
    int a;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin>>s;
        v5.push_back(s);
    }
    print_string_vector(v5);

    //Simirlaly we can make vector of pair,vector etc



    //vector.erase() mein pointer pass krna hota hai
    

    return 0;
}
