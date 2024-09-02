#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int val;
    Node* next;
};

int main() {

    Node a, b;
    a.val = 10;
    b.val = 20;
    a.next = &b;
    b.next = NULL;

    cout << "access the value of this Node" << endl;
    cout << "a.val = " << a.val << endl;
    cout << "b.val = " << b.val << endl;
    cout << (*a.next).val << " - (*.next).val" << endl;
    cout << a.next->val << "- a.next->val" << endl;
    

    return 0;
}