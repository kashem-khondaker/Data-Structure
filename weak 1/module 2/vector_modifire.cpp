#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    ------------------------------NOTE-------------------------------
    {v=x  aita dara amra akta vector ka arekta vector a assign korete pari}
    v.assign() dara amra kono value assign korte pari ;

    v.push_back() = aita dara amra kono value last a add korte pari 
    v.pop_back() = aitar dara amra kono value last index teke bad dite pari ;
    
    v.insert() = aitar dara amra kono value insert korte pari 
    abar kono vector o insert korte pari .. v.inset() 2 ta pointer rechive kore ex= v.begin()

    v.erase()= aita dara amra kono value delete korte pari . ati 2 ta parameter rechive korte
    pare pointer hisebe .. 

    */

   vector<int> x={10 , 12 ,3};
   vector<int> v={10 , 120 ,30};
   v=x; //// time complexity O(1);
   for (int i = 0; i < v.size(); i++)
   {
        cout<<v[i]<<" ";
   }


   vector<int> x={10 , 12 ,3};
   vector<int> v={10 , 120 ,30,100,20,60};
   x=v; //// time complexity O(n);
   for (int i = 0; i < v.size(); i++)
   {
        cout<<x[i]<<" ";
   }

    vector<int> v={10, 12, 30, 10};
    v.push_back(1);
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }//// value last add korlam v.push_back() er maddome er akta delete korlam v.pop_back() er maddome 

    vector<int> v={10, 10 ,0,10};
    vector<int> x={1, 1 ,0,1};

    v.insert( v.begin() , {3,12,10,25} );// inset some value ;
    v.insert( v.begin()+2 , x.begin(),x.end()  ); // insert a vector ;
    
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    vector<int>v={10,12,13,14,15};
    v.erase(v.begin()+1 , v.end()-3);
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }// for erase some element ;
    

   
    return 0;
}