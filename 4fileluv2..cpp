#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c = 'a';
    cout<<(int)c; // typecasting char to int
    cout<<endl;
    char b = 'c';
    cout<<c-b<<"\n";
    int a;
    double d;
    char c1;
    // input
    // 1 4.567 d pahli baar
    // 1 4.567 9 dusri baar
    cin>>a>>d>>c1;
    // cin tab tak input leta h jab tak use space(can be multiple) ya \n(can be multiple) na mil jaye
    cout<<a<<" "<<d<<" "<<c1<<" "<<(int)c1<<endl;

    int h;
    char i;
    // input
    // 12 2345
    cin>>i>>h;
    cout<<i<<" "<<h;
}