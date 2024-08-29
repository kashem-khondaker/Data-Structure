#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for (auto i = 0; i < n; i++)
    {
        if (v[i]>0)
        {
            v[i]=1;
        }
        else if (v[i]==0)
        {
            v[i]=0;
        }
        else
        {
            v[i]=2;
        }
        
    }
    for (auto i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}