#include<bits/stdc++.h>
using namespace std;

bool is_positive(int x)
{
    return x > 0;
}

int main()
{
    // lambda function
    
    auto sum = [](int x, int y){return x+y;};
    cout<<sum(2,3)<<endl;
    cout<<sum(12,3)<<endl;
    // or
    cout<< [](int x, int y){return x+y;}(8,13)<<endl;

    vector<int> v = {2,-3,5};
    cout<<all_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl; // 3rd parameter me condition hoti h
    // lambda function ki jagah aur kuch bhi pass kar sakte h
    // condition har ek element ke liye true hui toh all_of true return karega otherwise false
    cout<<all_of(v.begin(), v.end(), is_positive)<<endl;
    cout<<any_of(v.begin(), v.end(), is_positive)<<endl;
    // condition agar ek bhi element ke liye true hui toh any_of true return karega otherwise false
    cout<<none_of(v.begin(), v.end(), is_positive)<<endl;
    // condition agar saare element ke liye false hogi toh none_of true return karega otherwise false
    // yeh algorithms array par bhi lag sakti h
    cout<<all_of(v.begin(), v.end(), [](int x){return x%2 == 0;})<<endl;

    return 0;
}