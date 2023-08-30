// stl algorithms
#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Input:-
    6
    2 3 1 6 7 6
    */
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    cout<<"Let's start"<<endl;
    // time complexity of all functions for vectors and arrays = O(n)
    // time complexity of count and find = O(log(n))
    // gives minimum element
    int min = *min_element(v.begin()+3, v.end()); // takes starting position and last position ka agla and returns address
    cout<<min<<endl;
    // gives maximum element  
    int max = *max_element(v.begin(), v.end()); // takes starting position and last position ka agla and returns address
    cout<<max<<endl;
    // gives sum
    int sum = accumulate(v.begin(), v.end(), 3); // 3rd parameter is initial sum
    cout<<sum<<endl;
    // count of element
    int ct = count(v.begin(), v.end(), 6); // 3rd parameter is element for which count have to found
    cout<<ct<<endl;
    // returns iterator of element
    auto it = find(v.begin(), v.end(), 2); // 3rd parameter is element which has to found
    if(it != v.end())
    {
        cout<<*it<<endl;
    }
    else
    {
        cout<<"Element not found";
    }
    // reverse 
    reverse(v.begin()+2, v.end());
    cout<<"take a break! have a kitkat"<<endl;
    for(auto val : v)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    string s = "abcdsfdsjf";
    reverse(s.begin() + 4, s.end());
    cout<<s<<endl;

    // similarly we can do for arrays
    // bas arrays me pointer aa jayega iterator ki jagah
    // begin aur end hat jayenge
    return 0;
}