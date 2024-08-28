#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    // vector<int> v;
    // v.assign({1, 2, 3}); // Assign vector with an initializer list
    // for (auto i = v.begin(); i != v.end(); i++) 
    // {
    //     cout << *i << " ";
    // }
    vector<int> v;
    v.assign(7, 100); // Assign 7 elements with value 100
    cout << "Size of vector: " << v.size() << endl;
    
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i] << " ";
    }
    
    return 0;
}