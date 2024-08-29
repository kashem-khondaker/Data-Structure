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
    int cnt=0;
    for (auto i = 0; i <n; i++)
    {
        auto x = find ( v.begin() , v.end() , v[i]+1 );
        if (x!=v.end())
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}





//----------------------------------------------agai----------------------------------------




// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> v[i];
//     }

//     int cnt = 0;
//     for (int i = 0; i < n; i++) 
//     {
//         if (v[i] == v[i] + 1) 
//         {
//             cnt++;
//         } 
//         else 
//         {
//             cnt = 0;
//         }
//     }

//     cout<< cnt << endl;

//     return 0;
// }
