#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,1,2,3,1,5,40};
    replace(v.begin(),v.end(),2,1);//replace value by function 

    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    for (auto i = 0; i < v.size(); i++)// repalce value in normal proses ;
    {
        if (v[i]==1)
        {
            v[i]=5;
        }
    }
    
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}