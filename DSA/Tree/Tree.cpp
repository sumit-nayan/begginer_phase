#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Treenode{
    public:
    T data;
    vector<Treenode<T>*> children;
    Treenode(T data){
        this->data= data ;
    }

};
Treenode<int>* take_input(){
    
    cout<<"Enter data"<<endl;
    int data;
    cin>>data;
    Treenode<int>* root = new Treenode<int>(data);
    cout<<"Enter number of children of root "<<data<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        Treenode<int>* child = take_input();
        root->children.push_back(child);
    }
    return root;
    
}
void print(Treenode<int>* root){
    cout<<root->data<<":";
    for (int i = 0; i < root->children.size(); i++)
    {
        cout<<root->children[i]->data<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        print(root->children[i]);
    }
    
}
void print_at_level_k(Treenode<int>* root, int k){
    if(k==0){
        cout<<root->data<<endl;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        print_at_level_k(root->children[i],k-1);
    }
}
int number_of_leaf_nodes(Treenode<int>* root){
    
    if(root==NULL){  //Edge Case
        return 0;
    }
    int ans=1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += number_of_leaf_nodes(root->children[i]);
    }
    return ans;
}
void preorder(Treenode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    for (int i = 0; i < root->children.size(); i++)
    {
        preorder(root->children[i]);
    }
}
void postorder(Treenode<int>* root){
    if(root==NULL){
        return;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        postorder(root->children[i]);
    }
    cout<<root->data;
    
}
int node_no(Treenode<int>* root){
    int ans=1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans +=node_no(root->children[i]);
    }
    return ans;
    
    
}
int main(){
    /*Treenode<int>* root = new Treenode<int>(82);
    Treenode<int>* node = new Treenode<int>(41);
    Treenode<int>* node2 = new Treenode<int>(2);

    root ->children.push_back(node);
    root ->children.push_back(node2);*/
    Treenode<int>* root = take_input();
    print(root);
    return 0;
} 
//TODO delete tree