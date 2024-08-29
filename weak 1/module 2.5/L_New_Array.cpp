#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N;
    cin >> N;

    vector<int> v1(N);
    vector<int> v2(N);

    for (int i = 0; i < N; ++i) 
    {
        cin >> v1[i];
    }
    for (int i = 0; i < N; ++i) 
    {
        cin >> v2[i];
    }

    v1.insert(v1.begin(), v2.begin(), v2.end());// insert 

    for (int i = 0; i < v1.size(); ++i) // print 
    {
        cout << v1[i]<<" ";
        // if (i != v1.size() - 1) 
        // {
        //     cout << " ";
        // }
    }

    return 0;
}
