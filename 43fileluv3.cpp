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
    set<int> s;
    for(int i = 0; i< n; ++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<"Printing..."<<endl;
    // auto it = lower_bound(s.begin(), s.end(), 5);
    // for set and map
    // time complexity of above line = O(n) isliye upar wala tarika istemal na kare
    // neeche diya hua tareeka istemal kare
    // time complexity of neeche wala tareeka = O(log(n))
    // cout<<(*it)<<endl;
    auto it = s.lower_bound(5);
    cout<<(*it)<<endl;

    // map me lower/upper bound keval key par lagta h
    

}