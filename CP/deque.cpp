#include<bits/stdc++.h>
using namespace std;
void printdeque(deque<int> g){
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
    {
        cout<<'\t'<<*it;
    }
    cout<<endl;
    
}
int main(){

    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);
    dq.push_back(15);
    dq.push_back(30);
    dq.push_front(0);
    cout<<"Deque : ";
    printdeque(dq);

    cout<<"Deque size : "<<dq.size()<<endl;
    cout<<"Maximum : "<<dq.max_size()<<endl;

    cout<<"At 2 : "<<dq.at(0)<<endl;
    cout<<"At 2 : "<<dq.at(2)<<endl;
    cout<<"Last element :"<<dq.back()<<endl;

    cout<<"Pop Up last element : ";
    dq.pop_back();
    printdeque(dq);

    cout<<"Pop Up first element : ";
    dq.pop_front();
    printdeque(dq);
    
    




    return 0;
}