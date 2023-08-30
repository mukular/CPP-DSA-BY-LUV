#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";
    cout<<str<<endl;
    // input:-
    // World ASDH
    string str2;
    cin>>str2;
    cout<<str2<<endl;
    string str3 = "World";
    string result = str + str3;
    cout<<result<<endl;
    // code to check str is equal to str3
    if(str == str3)
    {
        cout<<"Equal";
    }
    else
    {
        cout<<"Not Equal";
    }
    cout<<endl;

    cout<<str[0]<<endl;
    str[0] = 'a';
    // str[0] = "a"; // gives error as str[0] is character
    cout<<str<<endl;
    cout<<str.size(); // gives size of string
    cout<<endl;
    for(int i = 0; i< str.size(); ++i)
    {
        cout<<str[i]<<endl;
    }

    string s1, s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;

    string h1;
    // input:-
    // abc    def 
    getline(cin, h1); // getline puri line ko input leta h
    cout<<h1;
    // getline me ek panga h ki yeh empty string ko input le leta h
    // explanation agli file me
}