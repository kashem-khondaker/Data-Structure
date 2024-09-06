#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* & head,int v)
{
    Node* newNode = new Node(v);
    if (head == NULL)
    {
        newNode = head;
        return ;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print(Node* head)
{
    Node* tmp = head;
    cout << "printing linked list : ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v==-1)
        {
            break;
        }
        insert_at_tail(head,v);
    }
    
    return 0;
}