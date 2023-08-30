// sort function
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // input:-
    /*
    6
    4
    5
    2
    25
    7
    8
    */
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a+2, a+n); // takes two parameters
    // 1st parameter:- jahan se sorting start karni h us point ka address
    // 2nd parameter:- jahan tak sorting karni h us point ka agla address
    // it uses intro sort which is best sorting algorithm
    // combination of quick sort, heap sort and insertion sort
    // time complexity of sort = O(n*log(n))
    for(int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // input:-
    /*
    6
    4
    5
    2
    25
    7
    8
    */

    int n2;
    cin>>n2;
    vector<int> v(n2);
    for(int i = 0; i < n2; ++i)
    {
        cin>>v[i];
    }
    sort(v.begin()+1, v.end()); 
    for(int i = 0; i < n2; ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}