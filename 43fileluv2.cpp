#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    Input:-
    6
    4
    5
    5
    25
    7
    8
    */
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0; i< n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    auto it = lower_bound(a.begin(), a.end(), 5);
    if(it == a.end())
    {
        cout<<"Not found";
    }
    cout<<endl;
    cout<<(*it)<<endl;

    auto it2 = lower_bound(a.begin(), a.end(), 6);
    if(it2 == a.end())
    {
        cout<<"Not found";
    }
    cout<<(*it2)<<endl;

    auto it3 = upper_bound(a.begin(), a.end(), 5);
    if(it3 == a.end())
    {
        cout<<"Not found";
    }
    cout<<(*it3)<<endl;

    return 0;
}