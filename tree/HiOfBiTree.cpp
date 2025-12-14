//height of the tree

// int height (Node* root){
//     if(root ==NULL){
//         return 0;
//     }
//     int leftHt = height(root->left);
//     int rightHt =height(root->right);
//     return max( leftHt,rightHt )+1 ;

// }
// int main(){
//     vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root =buildTree(preorder);

//     cout<<"height :"<<height(root)<<endl;
//     return 0;
    
// }
// Online C++ compiler to run C++ program online
// #include <iostream>

// int main() {
//     // Write C++ code here
//     std::cout << "Try programiz.pro";

//     return 0;
// }
#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
      int data;
      Node* right;
      Node* left;

      Node(int val){
        data= val;
        left = right = NULL;   
      }



};
static int idx =-1;
Node* buildTree(vector<int>preorder){
    idx ++;
    if(preorder [idx] == -1){
        return NULL;
    }

    Node* root =new Node(preorder[idx]);
    root -> left = buildTree(preorder); //left
    root -> right = buildTree(preorder);//right
    return root;


}
//preorder
// void preOrder(Node* root){
//     if (root ==NULL){
//         return;
//     }
//     cout<<root->data<<" ";
//     preOrder(root->left);
//     preOrder(root->right);

// }
//inorder traversal
// void InOrder(Node* root){
//     if(root==NULL){
//         return;
//     }
//     InOrder(root->left );
//     cout<<root->data<<" ";
//     InOrder(root->right);
// }
// //postorder traversal
// void PostOrder(Node* root){
//      if(root==NULL){
//         return;
//     }
//     PostOrder(root->left);
//     PostOrder(root->right);
//     cout<<root->data<<" ";
// }
// int main (){
//     vector <int >preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
//     Node* root = buildTree(preorder);
//     preOrder(root);
//      cout<<endl;
//     InOrder(root);
//     cout<<endl;
//     PostOrder(root);
    
    
//     return 0;
// }
//height of the tree

int height (Node* root){
    if(root ==NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt =height(root->right);
    return max( leftHt,rightHt )+1 ;

}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root =buildTree(preorder);

    cout<<"height :"<<height(root)<<endl;
    return 0;
    
}