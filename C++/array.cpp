#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *left,*right;
};
node * newnode(int data){
    node *temp  = new node;
    temp->data = data;
    temp->left = temp->right =  NULL;
    return temp;

}


    


int main()
{
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    cout<<"reverse of tree";


    
    

    
    return 0;
}
