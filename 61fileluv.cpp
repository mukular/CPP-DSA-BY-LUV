// XOR of two same numbers is 0
// x^x = 0
// x^0 = x
// x^y^z = x^z^y = y^x^z
#include<bits./stdc++.h>
using namespace std;

/*
Q.1. Given array a of n integers. 
All integers are present in even count except one.
Find that one integer which has odd count in O(N) time Complexity and O(1) space.
N < 10^5
a[i] < 10^5

Input:-
9
2 4 6 7 7 4 2 2 2
*/

int main()
{
    int a = 4, b = 6;
    // swap two numbers using XOR
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<a<<" "<<b<<endl;

    // Solution of question 1:-
    int n;
    cin>>n;
    int x;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    
}