#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    ----------------------------NOTE----------------------------------
    v.size() = this function use for chack size if this vector;
    v.resize() = this function use for resize this vector .. if we need we can resize it longer than befor or smoller than before ;
    
    
    
    v.max_size() = this function use for chack how many value can be include ;
    v.capacity() = this function use for chack capacity ;

    v.capacity() = 2 gon kore tar capacity baarai jodi tar capacity over hoia jai ;

    v.empty() = this function use for chack this vector is empty or not;

    */
    vector<int> v;
    cout<<v.size()<<endl;
    cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    cout<<v.capacity()<<endl;
    // v.clear();
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    v.resize(2);
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"capacity 2";
    cout<<endl;

    v.resize(7,1);
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;


    if (v.empty()==true)
    {
        cout<<"this vector is empty"<<endl;
    }
    else
    {
        cout<<"NO , there is something !"<<endl;
    }


    return 0;
}