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
    
    reverse(v.begin(), v.end());// riverse 
    
    for (auto i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}