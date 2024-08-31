#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int ar[] = {10, 20, 30, 40, 50};
    int n = sizeof(ar)/sizeof(ar[0]);


    vector<int> v(ar,ar+n);
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
