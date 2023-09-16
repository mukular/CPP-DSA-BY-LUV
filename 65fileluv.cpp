// Binary exponentiation
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;

int binExpRecur(int a, int b)
{   
    if(b == 0)
    {
        return 1;
    }
    int res = binExpRecur(a, b/2);
    if(b&1)
    {
        return (a * ((res * 1LL * res) % M)) % M;
    }
    else
    {
        return (res * 1LL * res) % M;
    }
}

int main()
{
    // pow() function returns double so it can give precision error

    int a = 2, b = 13;
    int ans = 1;
    // Time Complexity = O(n)
    // calculates (a^b)%M
    for(int i = 0; i < b; ++i)
    {
        ans *= a;
        ans %= M;
    }
    cout<<ans<<endl;
    cout<<binExpRecur(a, b)<<endl;
    cout<<pow(2, 13);


}