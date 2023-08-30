// comparator functions
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
    {
        return a.first < b.first;
    }
        return a.second > b.second;
}

int main()
{
    /*
    input:-
    6
    4 3
    5 5
    5 3
    25 6
    7 9
    8 5
    */
    int n;
    cin>>n;
    vector<pair<int,int> > a(n);
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    // built in comparator dekh lena jaise greater<pair<int,int> > waghera
    cout<<"printing ......."<<endl;
    for(int i = 0; i < n; ++i)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    cout<<endl;
    return 0;
}