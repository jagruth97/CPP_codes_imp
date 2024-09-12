#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
// struct Node *head = NULL;

Node *insert(Node *head, int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
        head = temp; // insert at begin
    else{
        Node* temp1=head;
        while(temp1->next != NULL)
            temp1=temp1->next;
        temp1->next=temp;
    }
    return head;
}

void Delete(Node* head,int n)
{
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
        temp1 = temp1->next;
    struct Node *temp2 = temp1->next; // nth node
    temp1->next = temp2->next;        // n+1 node
    free(temp2);                      // delete temp2
}

struct Node *Reverse(struct Node *head)
{
    struct Node *cur, *next, *prev;
    cur = head;
    prev = NULL;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}
/*
void Print(Node* head)
{
    // struct Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
*/

void Print(Node* head)  //Recursion
{
    if(head==NULL) return;
    cout<<head->data;
    Print(head->next);
}

int main()
{
    // cout << "Try here if the program doesnt work" <<endl;
    struct Node* head = NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,5);
    Print(head);
    cout<<endl;
    // int n;
    // cout << "Enter pos:" << endl;
    // cin >> n;
    // Delete(n);
    head = Reverse(head);
    Print(head);
}