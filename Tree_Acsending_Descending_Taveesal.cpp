#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <unordered_map>

using namespace std;
struct Node {
    int data;
    struct Node* left;
    struct Node* right;

};

Node* CreateNode(int data)
{
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Memory error\n";
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert_bst(Node* root, int value)
{
    if(root==NULL){
        Node* x = CreateNode(value);
        return x;
    }
 
    if(value > root->data){ root->right=insert_bst(root->right,value); }
    else { root->left=insert_bst(root->left,value) ; }
   // cout<<root->data<<" print"<<endl;
    return root;
}

void ASC(Node* root)
{
    if(!root) return ;
 ASC(root->left);
 cout<<root->data<<" ";
 ASC(root->right);

}

void DSC(Node* root)
{
    if(!root) return ;

 DSC(root->right);
 cout<<root->data<<" ";
  DSC(root->left);

}

int main()
{   
    
 Node* root=insert_bst(NULL,8);
insert_bst(root,3);
 insert_bst(root,10);
 insert_bst(root,1);
  insert_bst(root,6);
  insert_bst(root,14);
  insert_bst(root,4);
  insert_bst(root,7);
  insert_bst(root,13);

ASC(root);
 cout<<endl;
 cout<<endl;
 DSC(root);
  return 0;
}