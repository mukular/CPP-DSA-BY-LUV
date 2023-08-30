#include<bits/stdc++.h>
using namespace std;

int y; // global variable

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    cout<<(a==b)<<endl; // checks a is equal to b
    cout<<(a!=b)<<endl; // checks a is not equal to b
    cout<<((b > a) && (b > c));
    cout<<endl;
    cout<<((b > a) || (b > c));
    cout<<endl; 

    // input:-
    // 6 pahli baar
    // 7 dusri baar
    // 9 3rd baar
    int n;
    cin>>n;
    // program to print YES if n is even else print NO
    if(n % 2 == 0)
    {
        int x = 2;
        cout<<"YES";
    }
    else if(n % 3 == 0)
    {
        cout<<" Divisible by 3";
    }
    else
    {
        cout<<"NO";
    }
    cout<<endl;
    // cout<<x<<endl; // gives compilation error as x is only available in if statement
    {
        y = 3;
    }
    y = 2;

    // while loop
    int i = 1;
    while (i <= 10)
    {
        cout<<i<<endl;
        i++;
    }
    // for loop
    for (int i = 1; i <= 10; ++i)
    {
        // this i variable scope is in for loop only not outside this
        cout<<i<<endl;
    }
    int u = 1;
    for (; u <= 10; ++u)
    {
        
        cout<<u<<endl;
    }

    cout<<"YO"<<endl;
    for (int v = 1; v <= 10; cout<< v++ <<endl)
    {
        
    }

    // print pattern
    // *
    // **
    // ***
    // ****
    // .
    // .
    // n1 times
    // input 
    // 2
    // 5
    // 3
    int t;
    cin>>t;
    for(int test = 0; test < t; ++test)
    {
        int n1;
        cin>>n1;
        for (int q = 1; q <= n1; ++q)
        {
            for(int r = 1; r<=q; ++r)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
       
}