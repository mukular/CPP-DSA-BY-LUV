// GCD and LCM
#include<bits/stdc++.h>
using namespace std;

/*
(a*b)/GCD(a,b) = LCM(a,b)
*/

/*
gcd(a,b) = gcd(b, a%b) where b is non-zero
*/

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int main()
{
    cout<<gcd(12, 4)<<endl;
    cout<<gcd(18, 12)<<endl;
    cout<<gcd(12, 18)<<endl;
    cout<< 12*18 / gcd(12, 18)<<endl;
    cout<<__gcd(12, 18)<<endl; // in-built function to find gcd

}

/*
Minimum fraction of a/b =
a/gcd(a,b)  /  b/gcd(a,b)
*/