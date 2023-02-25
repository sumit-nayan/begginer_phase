class node{
    public :
        int data;
        node *next;

    node(int data) {
        this -> data = data;
        next = NULL; //kabhi error show krta hai kabhi nhi
    }
};