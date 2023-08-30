#include<bits/stdc++.h>
using namespace std;

void func(string s)
{
    s = "";
}

void fun(string &s)
{
    s = "";
}

void func1(int a[]) // or int a[10]
{
    a[0] = 5;
}

void func2(int a[][20]) // 2d array ke liye 2nd size dena jarrorri h
{
    a[0][0] = 15;
}

// global variable ko seedhe access kar sakte h in functions me pass karne ki jarrorat nhi 

int main()
{
    int a = 3;
    int b = 5;
    cout<<a<<" "<<b<<endl;
    swap(a, b); // in-built function
    cout<<a<<" "<<b<<endl;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    string s = "asfsa";
    cout<<s<<endl;
    func(s);
    cout<<s<<endl;
    fun(s);
    cout<<s<<endl;

    int arr[10];
    arr[0] = 7;
    cout<<arr[0]<<endl;
    func1(arr);
    cout<<arr[0]<<endl;

    int brr[10][20];
    brr[0][0] = 67;
    cout<<brr[0][0]<<endl;
    func2(brr);
    cout<<brr[0][0]<<endl;
}