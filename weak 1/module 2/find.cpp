#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,12,2,14,12,11,1};
    // vector<int>::iterator x;
    auto x = find(v.begin(),v.end(),1);
    cout<<*x<<" ";
    cout<<endl;
    if (x==v.end())
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    
    return 0;
}