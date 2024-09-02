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

int main()
{
    // dynamic node

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    
    // simple node
    Node aa(10);
    Node bb(20);
    Node cc(30);
    Node dd(40);

    // connection 
    head->next = a;
    a->next = b;



    // connection 

    aa.next = &bb;
    bb.next = &cc;
    cc.next = &dd;

    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    return 0;
}