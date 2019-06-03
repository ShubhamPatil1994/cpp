# include<stdio.h>
# include<cstdlib>
# include <bits/stdc++.h> 

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){
    // Allocating memory to the new node
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

struct node *insert(struct node *node, int data){
    if (node==NULL){
        return newNode(data);
    }
    else{
        if (data <= node->data)
            node -> left = insert(node -> left, data);
        else
            node -> right = insert(node -> right, data);
    return node;
    }
}


// Find the minimum in BST
int minValue(struct node *node){
    struct node *current = node;
    while (current->left != NULL){
        current = current->left;
    }
    return (current->data);
}


// Find the minimum in BST
int maxValue(struct node *node){
    struct node *current = node;
    while (current->right != NULL){
        current = current->right;
    }
    return (current->data);
}

/* Find the maximum at every level : DPS, 
Root is at level 1
*/

int main(){
    // Following creates a BST
    struct node *root = NULL;
    root = insert(root,4);
    insert(root,2);
    insert(root,8);
    insert(root,3);
    insert(root,6);
    insert(root,1);
    // Print the minimum value in BST
    cout << "The minimum value of BST " << minValue(root) << std::endl;
    cout << "The maximum value of BST " << maxValue(root) << std::endl;
    cout << 7/2 << std::endl;
    return 0;
}