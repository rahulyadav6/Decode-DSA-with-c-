#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node* root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int product(Node* root){
    if(root == NULL) return 1;
    int leftProduct = product(root->left);
    int rightProduct = product(root->right);
    int ans = root->val * leftProduct * rightProduct;
    return ans;
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);
    cout<<endl;
    cout<<product(a);
}