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
int sum(Node* root){
    if(root == NULL) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    int ans =  root->val + leftSum + rightSum;
    return ans;
}
int size(Node* root){
    if(root == NULL) return 0;
    int leftSize = size(root->left);
    int rightSize = size(root->right);
    int ans = 1 + leftSize + rightSize;
    return ans;
}
int nodeWithMaxValue(Node* root){
    if(root == NULL) return INT_MIN;
    // int lMax = nodeWithMaxValue(root->left);
    // int rMax = nodeWithMaxValue(root->right);
    return max(root->val,max(nodeWithMaxValue(root->left), nodeWithMaxValue(root->right)));
}

int level(Node* root){
    if(root==NULL) return 0;
    return 1+ max(level(root->left), level(root->right));
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(70);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout<<endl;
    cout<<sum(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    cout<<nodeWithMaxValue(a);
    cout<<endl;
    cout<<level(a);
}