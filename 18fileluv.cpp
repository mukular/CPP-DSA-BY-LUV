// hashing
/*
Q.1. Given T Test cases and in each test case a number N.
Print its factorial for each test case % M where M = 10^9 + 7.
Constraints:-
1 <= T <= 10^5
1 <= N <= 10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main()
{
    // solution of question 1:-
    // Method 1:-
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     int n;
    //     cin>>n;
    //     long long fact = 1;
    //     for (int i = 2; i <= n; ++i)
    //     {
    //         fact = (fact * i) % M;
    //     }
    //     cout<<fact<<endl;
    // }
    // time complexity = O(T*N) which is very large(10^10)

    // Method 2:-
    fact[0] = fact[1] = 1;
    for(int i = 2; i < N; ++i)
    {
        fact[i] = (fact[i-1] * i) % M;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    // time complexity = O(N) + O(T)
}

/*
Q.2. Given array a of N integers.Given Q queries
and in each query given a number X, print
count of that number in array.

Constraints:-
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

Input:-
6
3 5 5 7 7 8
5
3 
7 
5 
8 
9
Output:-
1
2
2
1
0
*/

/*
solution of question 2:-
Method 1:-
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ct = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == x)
            {
                ct++;
            }
        }
        cout<<ct<<endl;
    }
   // Time complexity = O(N) + O(Q*N) = O(N^2) which is 10^10
}

Method 2:-
const int N = 1e7+10;
int hsh[N]; // global array initialized to 0

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }

    // Time complexity = O(N) + O(Q) = O(N) which is 2*10^5
}
*/