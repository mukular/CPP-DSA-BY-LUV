#include<bits/stdc++.h>
using namespace std;

int main()
{
    // calculation higher data type me hoti h
    // order of precedence:-
    // characters -> int -> long int -> long long int -> float -> double(higher precedence)
    cout<<7/2<<endl;
    cout<<7/2.0<<endl;
    cout<<'c' + 1<<endl;

    int a = 3/2.0;
    cout<<a<<endl;
    double d = 3/2.0;
    cout<<d<<endl;
    double d1 = 3/2;
    cout<<d1<<endl;

    cout<<7/2*3<<endl;
    cout<<3*7/2<<endl;

    // Rough Range:-
    // -10^9 < int < 10^9
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18

    // long int different machines par output different de deta h isliye int ya long long int use kare

    int a1 = 100000;
    int b1 = 100000;
    int c1 = a1*b1; // overflow occurs
    cout<<c1<<endl;
    int mx = INT_MAX; // gives maximum integer
    cout<<mx<<endl;
    cout<<mx+1<<endl;
    int a2 = 100000;
    int b2 = 100000;
    long long int c2 = a2 * 1LL * b2; // here 1LL means 1 as long long integer
    cout<<c2<<endl;

    double j1 = 100000;
    double j2 = 100000;
    double j3 = j1 * j2;
    cout<<j3<<endl; // prints in scientific notation
    cout<<fixed<<j3<<endl; // Not print in scientific notation
    cout<<fixed<<setprecision(0)<<j3<<endl; // Isse . ke baad 0 print nhi hoga(shayad yeh . ke baad kitne digit print karne h wo batata h)
    j3 = 1e24; // It means 10^24
    cout<<fixed<<j3<<endl;
    // double and float, value kabhi bhi accurately store nhi karte
    // isliye inka istemal nhi karna chahiye
}