#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for (auto i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int pre[n];
    pre[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for (auto i = 0; i < n; i++)
    {
        cout<<pre[i]<<" ";
    }
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum;
        if(l)
    }
    
    return 0;
}