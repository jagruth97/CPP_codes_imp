// #include<bits/stdc++.h>
#include <iostream>
#include <stack>
// #include <queue>
#include <deque>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

// Traversal thru DFS(all 3)
void inorder(TreeNode* head)
{
    if(!head)
        return;

    if(head->left)
        inorder(head->left);

    cout<<head->val<<" ";

    if(head->right)
        inorder(head->right);
}

void preorder(TreeNode* head)
{
    if(!head)
        return;

    cout<<head->val<<" ";

    // if(head->left)
        preorder(head->left);


    // if(head->right)
        preorder(head->right);
}

void postorder(TreeNode* head)
{
    if(!head)
        return;

    postorder(head->left);
    postorder(head->right);
    cout<<head->val<<" ";
}

// without recursion, iterative approach using DFS
void inorder_iterative(TreeNode* head)
{
    if(!head)
        return;
    
    stack<TreeNode*> in;

    while(!in.empty() || head)
    {
        // leftmost node
        while(head)
        {
            in.push(head);
            head = head->left;
        }
        //head is null at this point, left leaf node
        head = in.top();
        in.pop();

        cout<<head->val<<" ";

        head = head->right;
    }

}

void preorder_iter(TreeNode* head)
{
    if(!head)
        return ;

    stack<TreeNode*> st;
    st.push(head);

    while(!st.empty())
    {
        TreeNode* node = st.top();
        st.pop();

        cout<<node->val<<" ";

        // right is pushed 1st cuz we need left to be processed 1st
        if(node->right)
            st.push(node->right);
        if(node->left)
            st.push(node->left);

    }
}

void postorder_iter(TreeNode* head) // not fully understood
{
    if(!head)
        return;

    stack<TreeNode*> st1, pos;
    st1.push(head);

    while(!st1.empty())
    {
        TreeNode* node = st1.top();
        st1.pop();

        pos.push(node);

        if(node->left)
            st1.push(node->left);
        if(node->right)
            st1.push(node->right);
    }

    while(!pos.empty())
    {
        cout<<pos.top()->val<<" ";
        pos.pop();
    }

}

// Traversal thru BFS

void levelorder(TreeNode* head)
{
    if(!head)
        return;

    deque<TreeNode*> q;
    q.push_back(head);

    while(!q.empty())
    {
        TreeNode* node = q.front();
        q.pop_front();

        cout<<node->val<<" ";

        if(node->left)
            q.push_back(node->left);
        if(node->right)
            q.push_back(node->right);
    }
}

// search thru DFS T:O(N), S:O(N)
bool dfssearch(TreeNode* head, int tgt)
{
    if(!head)
        return false;
    if(head->val == tgt)
        return true;

    return dfssearch(head->left, tgt) || dfssearch(head->right, tgt);
}

// search thru BFS
bool bfssearch(TreeNode* head, int tgt)
{
    if(!head)
        return false;
    if(head->val == tgt)
        return true;

    deque<TreeNode*> q;
    q.push_back(head);

    while(!q.empty())
    {
        TreeNode* node = q.front();
        q.pop_front();

        if(node->val == tgt)
            return true;
        
        if(node->left)
            q.push_back(node->left);
        if(node->right)
            q.push_back(node->right);
    }
    return false;
}

int main()
{

    TreeNode a = TreeNode(1);
    TreeNode b = TreeNode(2);
    TreeNode c = TreeNode(3);
    TreeNode d = TreeNode(4);
    TreeNode e = TreeNode(5);
    auto f = TreeNode(10);

    a.left = &b;
    a.right = &c;

    b.left = &d;
    b.right = &e;

    c.left = &f;

    cout<<"INORDER:";
    inorder(&a);

    cout<<"\nPREORDER:";
    preorder(&a);

    cout<<"\nPOSTORDER:";
    postorder(&a);

    cout<<"\nINORDER_ITERATIVE:";
    inorder_iterative(&a);

    cout<<"\nPREORDER_ITERATIVE:";
    preorder_iter(&a);

    cout<<"\nPOSTORDER_ITERATIVE:";
    postorder_iter(&a);

    cout<<"\nLEVELORDER:"; // TOP->DOWN LEFT->RIGHT
    levelorder(&a);

    cout<<"\nSEARCH using DFS:10 ";
    dfssearch(&a, 10) ? cout<<"Found" : cout<<"NOT";

    cout<<"\nSEARCH using BFS:10 ";
    bfssearch(&a, 10) ? cout<<"Found" : cout<<"NOT";

    return 0;
}

//      1
//    2   3
// 4   5  10  -
