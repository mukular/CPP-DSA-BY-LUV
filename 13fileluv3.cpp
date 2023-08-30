/*
Q.6. Input:-
In the first line, you will be given t no. of test cases.
For each test case, you will be given a whole number N.
Output:-
For each value N, print the first N lines of pascal triangle.

Constraints:-
1 <= t <= 100
1 <= N <= 40

Sample input:-
2
3
5
Sample output:-
1
1 1
1 2 1
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include<bits/stdc++.h>
using namespace std;

char upper(char c)
{
    return 'A' + (c-'a');
}

char lower(char c)
{
    return 'a' + (c-'A');
}

int main()
{
    // solution of question 6
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n][n];
        a[0][0] = 1;
        for(int i = 1; i < n; ++i)
        {
            a[i][0] = 1;
            a[i][i] = 1;
            for (int j = 1; j < i; ++j)
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j <= i; ++j)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    // solution of question 7
    /*
    Input:-
    lBaXps
    */
    string s;
    cin>>s;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = upper(s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = lower(s[i]);
        }
    }
    int result = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            result = result - s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            result = result + s[i];
        }
    }

    if(result < 0)
    {
        result = result * -1;
    }

    int flag = 0;
    for(int i = 2; i < result; ++i)
    {
        if(result % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<1;
    }
    else{
        cout<<0;
    }
}

/*
Q.7. Monk loves Primes, whether it is number or word
Rules to convert a string to a number:
1. Convert the UpperCase letters to LowerCase letters
1. Convert the LowerCase letters to UpperCase letters
Add the ASCII values of all the UpperCase letters and subtract the ASCII values of all the LowerCase letters.
The resultant number is X.
Note:-
If X is negative take absolute value of it.
Print 1 if X is a prime number and 0 if not

Input Format:-
A single line which consists of a string
Output Format:-
0 or 1 in a single line

Constraints:-
1 <= stringlength <= 2000
*/
