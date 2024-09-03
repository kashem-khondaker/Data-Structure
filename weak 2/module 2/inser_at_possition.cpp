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

void insert_at_tail(Node* & head , Node* & tail , int n)
{
    Node* newNode = new Node(n);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode;
    cout << endl <<" inseted at tail" << endl << endl;
}

void insert_at_possition(Node* & head,Node* & tail ,int val ,int pos)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head =  newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void print_linked_list(Node* head)
{
    Node* temp = head ;
    cout << endl << "my linked list : ";
    while (temp != NULL)
    {
        cout << temp->val << " " ;
        temp = temp->next;
    }
    cout << endl << endl;
    
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    while (true)
    {
        cout << "command 1 : insert at tail" << endl;
        cout << "command 2 : insert at possition " << endl;
        cout << "command 3 : print linked list " << endl ;
        cout << "command 4 : terminate the programe " << endl;
        cout << "please input command : ";

        int command ;
        cin >> command;

        if (command == 1)
        {
            int val ;
            cout << "please input value : ";
            cin >> val;
            insert_at_tail(head,tail, val);
        }
        if (command == 3)
        {
            int val;
            cout << "please input value: ";
            cin >> val;
            
            int pos;
            cout << "please input possition : ";
            cin >> pos;

            insert_at_possition(head, tail , val , pos);
        }
        
        if (command == 3)
        {
            print_linked_list(head);
        }
        
        if (command == 4)
        {
            break;
        }
        
        
    }
    
    
    return 0;
}