// Nth root of a number
#include<bits/stdc++.h>
using namespace std;

double eps = 1e-7; // iska use h ki decimal ke baad 7 digit tak value accurate aaye
double multiply(double mid, int n)
{
    double ans = 1;
    for(int i = 0; i < n; ++i)
    {
        ans *= mid;
    }
    return ans;
}

int main()
{
    // time complexity = O(p*log(n*(10^d)))
    // for pth root of number n with d decimal accuracy
    double x;
    int n;
    cin>>x>>n;
    double lo = 1, hi = x, mid;
    while(hi - lo > eps)
    {
        mid =(hi+lo) / 2;
        if(multiply(mid, n) < x)
        {
            lo = mid;
        }
        else
        {
            hi = mid;
        }
    }
    cout<<setprecision(10)<<lo<<endl;
    cout<<pow(x, 1.0/n); // in-built function to find power
}