#include<bits/stdc++.h>
using namespace std;

void fun(int a) {

    cout << a + 5 << endl;
}

void fun2(int &a) {
    
    a = 200;
    cout << a << endl;
}
int main()
{
    int a ;
    cin >> a;

    cout << a << endl;
    fun(a);
    cout << a << endl;

    fun2(a);

    cout << a << endl;

    
    return 0;
}