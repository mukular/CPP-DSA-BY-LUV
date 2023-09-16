// MSB is leftmost bit
// LSB is rightmost bit
// ith bit set means ith bit is 1
// ith bit unset means ith bit is 0

#include<bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
    for(int i = 10; i >= 0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}

int main()
{
    printBinary(9);
    int a = 9;
    int i= 3;
    // check if ith bit is set or not in a
    if((a & (1 << i)) != 0)
    {
        cout<<"set bit\n";
    }
    else
    {
        cout<<"not set bit\n";
    }

    // set 2nd bit
    printBinary(a | (1 << 2));

    printBinary(~a); // reverse bits

    // unset 3rd bit
    printBinary(a & ~(1 << 3));

    // toggle a bit means 1 ko 0 banana 0 ko 1 banana
    // toggle 2nd bit
    printBinary(a ^ (1 << 2));

    // bit count means set bits kitni h
    int ct = 0;
    for(int i = 31; i >= 0; --i)
    {
        if((a & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout<<ct<<endl;
    cout<<__builtin_popcount(a)<<endl; // in-built function works for only integers not for long long or other
    cout<<__builtin_popcountll((1LL<<35)-1)<<endl; // in-built function works for long long
}