#include<iostream>
#include<vector>
#include<queue>
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
void preOrder(Node* root){
    if (root ==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
//inorder traversal
void InOrder(Node* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left );
    cout<<root->data<<" ";
    InOrder(root->right);
}
//postorder traversal
void PostOrder(Node* root){
     if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
void LevelOrder(Node* root){
    queue<Node*>Q;
    

    Q.push(root);
    Q.push(NULL);

    while(Q.size()>0){
        Node* curr= Q.front();
        Q.pop();
        if(curr==NULL){
            if(!Q.empty()){
                cout<<endl;
                Q.push(NULL);
                continue;

            }else{
                break;

            }
        }
        cout<< curr->data<<" ";

        if (curr->left!=NULL){
           Q.push(curr->left);
        }
        if(curr->right!=NULL){
            Q.push(curr->right);
        }
    }
    cout<<endl;
}
int main (){
    vector <int >preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    LevelOrder(root);
     cout<<endl;
    // InOrder(root);
    // cout<<endl;
    // PostOrder(root);
    
    
    return 0;
}