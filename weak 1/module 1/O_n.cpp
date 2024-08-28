#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];

    for (int i = 0; i <=n; i++) // O_(n)complexity 
    {
        cin>>ar[i];
    }
    int s=0;
    for (int i = 0; i < n; i++) // O_(n)complexity 
    {
        s+=ar[i];
    }
    cout<<s<<endl;
    return 0;
} // time complexity of this code is O_(n).