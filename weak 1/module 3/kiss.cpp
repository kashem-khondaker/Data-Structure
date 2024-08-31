#include <bits/stdc++.h>
using namespace std;

void modifyVector(vector<int>::iterator begin, vector<int>::iterator end) 
{
    for (auto it = begin; it != end; it++) 
    {
        *it += 11; 
    }
}

int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    

    modifyVector(v.begin(), v.end());

    for (auto it = v.begin(); it != v.end(); it++) 
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
