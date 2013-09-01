#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

class Node
{
    public:
            int data;
            Node *left;
            Node *right;
};

class Tree
{
    private:
            Node *root;
    public:
     //       void initialize();
       //     void printTree(root);
            void printTree(Node *root)
            {
                if(root == NULL)
                    return;
    
                printf("%d\n",root->data);
                printTree(root->left);
                printTree(root->right);
            }

            void initialize()
            {
                root = new Node();
                root->data = 10;
                root->left = new Node();
                root->left->data = 5;
                root->left->left = NULL;
                root->left->right = NULL;
    
                root->right = new Node();
                root->right->data = 2;
                root->right->left = NULL;
                root->right->right = NULL;
    
                //printTree(root);
            }
            
            Node * getRoot()
            {
                return root;
            }
            
            int sizeCount(Node *root)
            {
                if(root == NULL)
                   return 0;
                
                return 1 + sizeCount(root->left) + sizeCount(root->right);
            }
            
            int size()
            {
                return sizeCount(root);
            }
            
            int maxDepthOfTree(Node *root)
            {
                if(root == NULL)
                   return 0;
                   
                return 1 + max(maxDepthOfTree(root->left),maxDepthOfTree(root->right));
            }
            
            int maxDepth()
            {
                return maxDepthOfTree(root);
            }
            
            int minDepthOfTree(Node *root)
            {
                if(root == NULL)
                   return 0;
                
                return 1 + min(minDepthOfTree(root->left),minDepthOfTree(root->right));
            }
            
            int minDepth()
            {
                return minDepthOfTree(root);
            }
            
            void inOrderTraversal(Node *root)
            {
                if(root == NULL)
                   return;
                   
                inOrderTraversal(root->left);
                printf("%d ",root->data);
                inOrderTraversal(root->right);
            }
            
            void preOrderTraversal(Node *root)
            {
                if(root == NULL)
                   return;
                   
                printf("%d ",root->data);
                preOrderTraversal(root->left);
                preOrderTraversal(root->right);
            }
            
            void postOrderTraversal(Node *root)
            {
                if(root == NULL)
                   return;
                   
                postOrderTraversal(root->left);
                postOrderTraversal(root->right);
                printf("%d ",root->data);
            }
            
            bool isBalanced()
            {
                return (maxDepth() - minDepth() <= 1);
            }
            
            void insertInToBST(Node *root, int x)
            {
                if(root == NULL) {
                    Node *temp = new Node();
                    temp->data = x;
                    temp->left = NULL;
                    temp->right = NULL;
                    root = temp;
                }
                
                if(root->data < x){
                    if(root->right != NULL)
                        insertInToBST(root->right,x);
                    else {
                        Node *temp = new Node();
                        temp->data = x;
                        temp->left = NULL;
                        temp->right = NULL;
                        root->right = temp;
                    }
                } else {
                    if(root->left != NULL)
                        insertInToBST(root->left,x);
                    else {
                        Node *temp = new Node();
                        temp->data = x;
                        temp->left = NULL;
                        temp->right = NULL;
                        root->left = temp;
                    }
                }
            }
            
            void delete(int x)
            {
            }
};

int main()
{
    class Tree T;
    T.initialize();
    T.printTree(T.getRoot());
    printf("Size of tree: %d\n",T.size());
    printf("Max Depth of tree: %d\n",T.maxDepth());
    printf("Min Depth of tree: %d\n",T.minDepth());
    T.inOrderTraversal(T.getRoot());
    T.preOrderTraversal(T.getRoot());
    T.postOrderTraversal(T.getRoot());
    printf("\n%d\n",T.isBalanced());
    T.insertInToBST(T.getRoot(),4);
    T.printTree(T.getRoot());
    system("pause");
    return 0;
}
