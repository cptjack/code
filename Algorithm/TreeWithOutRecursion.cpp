#include<iostream>
#include<cstdio>
#include<stack>
#define NEWLINE printf("\n");
using namespace std;

class Node {
    public:
            Node(int x) {
                val = x;
                left = NULL;            
                right = NULL;
            }
            Node() {}
            int val;
            Node *left;
            Node *right;
};

class Tree {
    public:
            void inOrderTraversal(Node *root) {
                if(root == NULL)
                    return;
       
                Node *current = root;
                stack<Node*> S;
                while(1) {
                    if(current != NULL) {                        
                        S.push(current);
                        current = current->left;
                    } else {
                        current = (Node*)S.top();
                        S.pop();
                        printf("%d ", current->val);
                        current = current->right;
                        if(current == NULL && S.empty())
                            break;
                    }
                    
                }
            }
            
            void preOrder(Node *root) {
                if(root == NULL)
                   return;
                
                Node *current = root;
                stack<Node*> S;
                while(1) {
                    if(current != NULL) {
                        printf("%d ", current->val);
                        S.push(current);
                        current = current->left;
                    } else {
                        current = S.top();
                        S.pop();
                        current = current->right;
                        if(current == NULL && S.empty())
                            break;
                    }
                }
            }
};


int main() {

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    root->right->right = new Node(6); 
    Tree tree;// = new Tree();
    printf("INORDER : ");
    tree.inOrderTraversal(root);
    NEWLINE
    printf("PREORDER : ");
    tree.preOrder(root);
    //printf("AKANK");
    NEWLINE;
    system("pause");
    return 0;
}
