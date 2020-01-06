/*
Given the root node of a binary search tree (BST) and a value. You need to find the node in the BST that the node's value equals the given value. Return the subtree rooted with that node. If such node doesn't exist, you should return NULL.

For example, 

Given the tree:
        4
       / \
      2   7
     / \
    1   3

And the value to search: 2
You should return this subtree:

      2     
     / \   
    1   3
In the example above, if we want to search the value 5, since there is no node with value 5, we should return NULL.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* searchBST(struct TreeNode* root, int val){
    struct TreeNode *temp=root;
    
    while(temp != NULL && temp->val != val)  /*while(temp->val != val && temp != NULL) it will not work.*/
    {
        if(val > temp->val) 
            temp=temp->right;
        else if(val < temp->val)
            temp=temp->left;
    }
    if(temp  == NULL)
    {
        return NULL;
    }
    else
    {
        return temp;
    }

}

