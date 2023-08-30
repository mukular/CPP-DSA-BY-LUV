#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int x; // constant time operation 
    int sum = 0;
    sum = x+x;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int y;
        y = 5;
        y++;
    }
    // time complexity = O(5) + O(3*n) = O(n)
    */
    
    /*
     O(N) + O(N) = O(N)
     O(k*N)  = O(N) if k << N
     O(3) = O(4) = O(5) = O(10) ... = O(1)
    */

    /*
    Number of iterations in 1 sec. ~ 10^7-10^8(on online coding websites)
    */

    /*
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }

    // time complexity = O(1) + O(1) + O(n) + O(n) + O(n) + O(n) = O(n)
    */

   /*
    int n;
    cin>>n;
    int ct = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int i = 0; i < n; ++i)
        {
            ct++;
        }
    }

    // time complexity = O(1) + O(1) + O(n^2) = O(n^2) 
   */

     /*
    int n;
    cin>>n;
    while(n > 0)
    {
        n = n / 2;
    }

    // time complexity = O(1) + O(1) + O(log(n) base2) = O(log(n))
     */

    /*
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < i; ++j)
        {

        }
    }
    
    // time complexity = O(n^2)
    */

    /*
    Q.1. Given T test cases and an array of size N.
    Print sum of array in each test case.
    Constraints:-
    1 <= T <= 1000
    1 <= N <= 1000
    1 <= a[i] <= 1000

    solution of question 1:-
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
    }

    // time complexity = O(T*N) = O(N^2) 
    */

    /*
    Q.2. Given T test cases and an array of size N.
    Print sum of array in each test case.
    Constraints:-
    1 <= T <= 100000
    1 <= N <= 100000
    1 <= a[i] <= 1000
    Sum of N over all Test cases is < 10^7
    The above statement means sum of all iterations for total test cases is < 10^7

    solution of question 1:-
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        for(int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
    }

    // time complexity = O(10^7) 
    */
    
}