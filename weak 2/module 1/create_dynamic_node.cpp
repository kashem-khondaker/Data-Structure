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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    // connection of this node 
    head->next = a;
    a->next = b;

    //print node
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << a->val << endl;
    cout << b->val << endl;
    cout << a->next->val << endl;
    return 0;
}