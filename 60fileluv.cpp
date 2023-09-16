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
    for(int i = 0; i < 8; ++i)
    {
        printBinary(i);
        if(i&1)
        {
            cout<<"odd\n";
        }
        else
        {
            cout<<"even\n";
        }
    }

    int n = 5;
    // divide by 2
    cout<<(n >> 1)<<endl;
    // Multiply by 2
    cout<<(n << 1)<<endl;

    for(char c = 'A'; c <= 'E'; ++c)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c = 'a'; c <= 'e'; ++c)
    {
        cout<<c<<endl;
        printBinary(int(c));
    }

    // converting uppercase to lowercase
    char A = 'A';
    char a = A | (1<<5);
    cout<<a<<endl;
    cout<<char('C' | ' ')<<endl;
    char B = 'B';
    char b = B | ' ';
    cout<<b<<endl;

    // converting lowercase to uppercase
    cout<<char(a & (~(1<<5)))<<endl;
    cout<<char('c' & '_')<<endl;
    char d = 'd';
    char D = (d&'_');
    cout<<D<<endl;

    printBinary(59);
    // unset last 4 bits
    int num = 59;
    int pos = 4;
    int fin_num =  (num & ~((1<<(pos+1)) - 1));
    printBinary(fin_num);

    // unset to 3rd bit
    pos = 3;
    int new_num = (num & (1 << (pos+1))-1);
    printBinary(new_num);

    // check if a number is power of 2
    int no = 15;
    if(no & (no-1))
    {
        cout<<"Not power of 2";
    }
    else
    {
        cout<<"power of 2";
    }
}