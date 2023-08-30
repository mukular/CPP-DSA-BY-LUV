// function
#include<bits/stdc++.h>
using namespace std;

void printHello()
{
    cout<<"Hello World";
}

int sum(int a, int b)
{
    int result = a+b;
    return result;
}

int digit_sum(int n)
{
    int digit_sum = 0;
    while(n)
    {
        digit_sum = digit_sum + n % 10;
        n = n / 10;
    }
    return digit_sum;
}

void increment(int n) // pass by value
{
    n++;
}

void incre(int &n) // pass by reference
{
    n++;
}

void in(int &n, int n1)
{
    n++;
    n1++;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swp(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    printHello();
    cout<<sum(2,3);
    cout<<endl;
    /*
    input:-
    123 2345
    */
    int a, b;
    cin>>a>>b;
    cout<<digit_sum(a) + digit_sum(b);
    cout<<endl;

    int n = 3;
    cout<<n<<endl;
    increment(n);
    cout<<n<<endl;
    incre(n);
    cout<<n<<endl;

    int x = 3;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    in(x, y);
    cout<<x<<" "<<y<<endl;

    swap(x, y);
    cout<<x<<" "<<y<<endl;
    swp(x, y);
    cout<<x<<" "<<y<<endl;
}