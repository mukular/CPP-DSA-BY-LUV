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
    // sorted hone chahiye tabhi upper bound aur lower bound lag sakta h
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    // lower bound element find karega nhi mila toh usse bade element ko find karega
    // upper bound us element se bade element ko find karega
    // These functions return location
    for(int i = 0; i< n; ++i)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int *ptr = lower_bound(a, a+n, 5); // parameters:-
    //  1st:- starting address jahan se find karna shuru karna h
    // 2nd:- jahan tak find karna h uska agla address
    // 3rd:- jis element ka lower / upper bound find karna h
    // time complexity of both(lower_bound and upper_bound) functions  = O(log(n)) where n is array size
    if(ptr == (a+n))
    {
        cout<<"Not found";
    }
    cout<<endl;
    cout<<(*ptr)<<endl;

    int *ptr2 = lower_bound(a+4, a+n, 6);
    if(ptr2 == (a+n))
    {
        cout<<"Not found";
    }
    cout<<(*ptr2)<<endl;

    int *ptr3 = upper_bound(a, a+n, 5);
    if(ptr3 == (a+n))
    {
        cout<<"Not found";
    }
    cout<<(*ptr3)<<endl;

    return 0;
}