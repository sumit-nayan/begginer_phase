#include<iostream>
using namespace std;
#include "class_node_linked_list.cpp"
node* delete_node(node* head,int i){
    int count=0;
    node* temp=head;
    if (i==0)
    {
        head=head->next;
        return head;
    }
    
    while (count<i-1 && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    node* temp2=head;
    int count2=0;
    while (count<i+1 && temp2!=NULL)
    {
        temp2=temp2->next;
        count2++;
    }
    //or we can do this a=temp->next & b=a->next toh uske agle wale ka address mil jayega
    if(temp!=NULL && temp2!=NULL){
    temp->next=temp2;
    }
    
    /*if (temp!=NULL)
    {
        node* a=temp->next;
        node* b=a->next;
        temp->next=b;
    }*/
    
    return head;  //doubt: Why this code dump if we don't apply temp!=NULL condition and not using higher length i.
}
node* delete_node_r(node* head,int i){
    if (head==NULL)
    {
        return head;
    }
    if (i==0)
    {
        head=head->next;
        return head;
    }
    else
    {
        node* a=delete_node_r(head->next,i-1);
        head->next=a;
        return head;
    }
    
    
}
node* insert_node(node* head,int i,int data){
    node* new_node=new node(data);
    int count=0;
    node* temp=head;
    if(i==0){
        new_node->next=head;
        head=new_node;
        return head;
    }
    while (count<i-1 && temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
    new_node->next=temp->next;
    temp->next=new_node;
    }
    return head;
    
}
node* insert_node_r(node* head,int i,int data){
    if (head==NULL)
    {
        return head;
    }
    if (i==0)
    {
        node* new_node=new node(data);
        new_node->next=head;
        head=new_node;
        return head;
    }else
    {
        node* a=insert_node_r(head->next,i-1,data);
        head->next=a;
        return head;
    }
     
//There is a problem with this code that you can't add in last. Think about this and correct this.
    
}
node* take_input(){
    //Make a fn jo user se input le, linked list banaye and main fn ko uss linked ka head return kr de;
//isme no argument hoga qki usse main fn se koi input nhi lena hai usse bas user se input lena and head main fn ko return kr dena hai
    int data;
    cin>>data;
    node* head=NULL;
    while (data!=-1)
    {
        node* new_node= new node(data);
        if (head==NULL)
        {
            head=new_node;
        }
        else
        {   
            node* temp=head;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=new_node;
            
        }
        cin>>data;
        
    }
    return head;

    
    
    

}
node* take_input2(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
        node* new_node=new node(data);
        if (head==NULL && tail==NULL)
        {
            head=new_node;
            tail=new_node;
        }else{
            tail->next=new_node;
            tail=new_node;//or we can write here tail=tail->next;
            
        }
        cin>>data;
        
    }
    return head;
}
void print(node* head){
    /*while (head->next!=NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    cout<<head->data<<endl; //think, From above while loop next wala print nhi hoga  */
    //In this case we loses head i.e we loses address of first element of linked list, iss se hum dubara linked list access nhi kr payenge
    //so always make a temprory variable jisme head ko copy kr do and temp pe work kro
    node *temp =head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // Think ki isme kya ho rha hai last wale case mein; phle last wala print kr dega then last wale mein NULL pointer ke equal head hoga
}
int main(){

    /*node n1(1);
    node* head = &n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    
    
    cout<<n1.data<<endl;
    cout<<n2.data<<endl;


    print(head);
    cout<<endl;*/

    //node* head2=take_input();
    
    //print(head2);

    node* head3=take_input2();
   // print(head3);
    //cout<<endl;
 //  int i,data;
 //   cin>>i>>data;

   // head3=insert_node_r(head3,i,data);
  //  print(head3);
  int i;
  cin>>i;
    
    node* head4=delete_node_r(head3,i);
    print(head4);


    return 0;
}