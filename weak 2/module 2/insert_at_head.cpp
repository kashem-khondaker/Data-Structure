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

void insert_at_head(Node* & head ,int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        newNode = head;
        return ;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_possition(Node* & head,int val,int pos)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_tail(Node* & head,int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        newNode = head;
        return;
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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}

int main()
{
    Node* head = NULL;

    while (true)
    {
        cout << "command 1 : insert in tail " << endl;
        cout << "command 2 : insert in possition" << endl;
        cout << "command 3 : insert in head " << endl;
        cout << "command 4 : print linked list" << endl;
        cout << "command 5 : terminate the programe" << endl;

        int command ;
        cin >> command;

        if (command == 1)
        {
            int val;
            cout << "input value : ";
            cin >> val;

            insert_at_tail(head,val);
        }
        else if (command == 2)
        {
            int pos;
            cout << "input possition : ";
            cin >> pos;

            int val;
            cout << "input value: ";
            cin >> val;

            if (val == 0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_possition(head,val,pos);
            }
            
        }
        else if (command == 3)
        {
            cout << "inserting in head : " << endl;
            int val;
            cout << "input value : ";
            cin >> val;

            insert_at_head(head , val);
        }
        else if (command == 4)
        {
            cout << "print linked list : ";
            print(head);
        }
        else if (command == 5)
        {
            cout << "programe terminated !" << endl;
            break;
        }
        
        
        
        
    }
    
    return 0;
}