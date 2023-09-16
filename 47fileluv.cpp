#include<bits/stdc++.h>
using namespace std;

/*
Q.1. Given n pairs of parentheses, write a function 
to generate all combinations of well-formed parentheses.
*/

vector<string> valid;

// Time Complexity of generate function = O(2^n)
void generate(string &s, int open, int close)
{
    if(open == 0 && close == 0)
    {
        valid.push_back(s);
        return;
    }
    if(open > 0)
    {
        s.push_back('(');
        generate(s, open-1, close);
        s.pop_back();
    }
    if(close > 0)
    {
        if(open < close)
        {
            s.push_back(')');
            generate(s, open, close-1);
            s.pop_back();
        }
    }
}

int main()
{
    // input:-
    // 3
    int n;
    cin>>n;
    string s;
    generate(s, n, n);
    for(auto ele : valid)
    {
        cout<<ele<<endl;
    }

}