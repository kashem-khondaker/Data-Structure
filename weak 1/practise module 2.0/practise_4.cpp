#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(i+1);
    }
    cout<<v.size() << endl << v.capacity() << endl << v.max_size() <<endl;
    
    //resize the vector to hold 20 elements

    v.resize(20,0);
    cout<<"after increase the size of this vector"<<endl<<v.size()<<endl<<v.capacity()<<endl;
   
   // clear vector ;
//    v.clear();
//    cout<<"after clear the vector "<<endl<<v.size()<<endl<<v.capacity()<<endl; 
    // chack empty or not 
    if (v.empty()==true)
    {
        cout<<"Nothing in this vector";
    }
    else
    {
        cout<<"there is something;";   
    }
    
    
    return 0;
}