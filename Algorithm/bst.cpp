#include<iostream>
#include<cstdio>

using namespace std;

struct node
{
    int value;
    node *left;
    node *right;
}*root;

void createTree()
{
    node *temp,*tempLeft,*tempRight;
    temp->value = 5;
    root->left = temp;
    printf("temp created");
    tempLeft->value = 4;
    tempRight->value = 6;
    
    temp->left = tempLeft;
    temp->right = tempRight;
    
    node *rootRight;
    rootRight->value = 11;
    root->right = rootRight;
    
   // root->right->left->value = 9;
    //root->right->right->value = 12;
    
}

bool search(int x,node *current)
{
    if(current->value == x)
       return true;
    //else if(current == null)
       
    else if(x <= current->value)
        return search(x,current->left);
    else if(x > current->value) return search(x,current->right);
    else return false;
}

int main()
{
    root->value = 8;
    *root->left = 0;
    *root->right = 0;
    createTree();
    printf("DONE!!");
    bool f = search(9,root);
    printf("%d",f);
    system("pause");
    return 0;
}
