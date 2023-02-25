#include<iostream>
using namespace std;
class stack {

    public:
        char *arr;
        int top;
        int size;

    stack(int size) {
        this -> size = size;
        arr = new char[size];
        top = -1;
    }


    void push (int element){
        if(size-top>1){ //Think here (size>top) also or (size>top+1)
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>-1){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    char peek(){
        if(top>-1 && size>top){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
        
    }

    bool isEmpty(){
        if(top>-1){
            return true;
        }
        else{
            return false;
        }
    }
};