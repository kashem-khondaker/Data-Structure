// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     /*
    
//     ............................Note........................................
//     vector ak prokar dynamic array . kinto aita jakono data type nia kaj korte 
//     pare . ati dynamic array er akta libreary STL er vitor a pore . 
//     amra dynamic array nia kaj koresi . akon oitar akta library nia kaj korbo .
//     ...........................................................................
    
//     */

//    // topic summary

//    vector<int> v; // syntex of a vector;
//    vector<int> v(size);// vector and int size;
//    vector<int> v(size, initilize_value); // vector size with initialize a value;
//    vector<int> v2(copy vector); // copy a vector to anonther vector 
//    vector<int> v(ar,ar+n); // copy an array in a vector 
//    vector<int> v={12,1,13,24};// input some value in this vector
   
//    int n;
//    cin>>n;
//    vector<int> v(n);
//    for (int i = 0; i < n; i++)
//    {
//         cin>>v[i];// input value from user ;
//    }



   



//     // vector<int>v;//this is type 1 
//     // cout<<v.size();// vector size


//     // int n;
//     // cin>>n; 
//     // vector <int> v(n);// type 2 .. 
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout<<v[i]<<" ";// kono value assign kora nai .. tai amra sure nah ja value ki takte pare .. 0 takte pare abar garbage value oo takte pare . 
//     // }

//     // cout<<endl<<endl;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin>>v[i];
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }
    


//     // int n;
//     // cin>>n;
//     // vector<int> v(n);
//     // cout<<v.size()<<endl;
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cin>>v[i];
//     // }
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout<< v[i]<<" ";
//     // }// type 2 user input as like array 



//     // vector<int> v(5,1);// initialize all element 0 in vector  (v);

//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // } //end of type 3 

//     // cout<<endl;

//     // vector<int> v2(v); // copy vector in another vector .. 
//     // for (int i = 0; i < v2.size(); i++)
//     // {
//     //     cout<<v2[i]<<" ";
//     // }// type 4 ;


//     // int n;
//     // cin>>n;
//     // int ar[n];
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cin>>ar[i];
//     // }
    
//     // vector<int> v(ar,ar+n); // copy an array in this vector .. you have give him 
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout<<v[i]<<" ";
//     // }

//     // vector initialization another weya ;
//     vector<int> v={10 , 10 , 5};
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
    
//     return 0;
// }