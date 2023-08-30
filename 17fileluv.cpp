/*
formulas:-
(a+b)%m = ((a%m) + (b%m))%m
(a*b)%m = ((a%m) * (b%m))%m
(a-b)%m = ((a%m) - (b%m) + m)%m
*/

/*
Q.1. Given a number N. Print its factorial.
Constraints:-
1 <= N <= 100

Print answer modulo M where M = 47
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // solution of question 1:-
    int n;
    cin>>n;
    int M = 47;
    long long fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact = (fact * i) % M;
    }
    cout<<fact<<endl;
    
}