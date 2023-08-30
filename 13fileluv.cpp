// contest questions
#include<bits/stdc++.h>
using namespace std;

char upper(char c)
{
    return 'A' + (c - 'a');
}

int main()
{
    // Q.1.
    /*
    input(given in lowercase):-
    subscribe to the luv channel
    output:-
    print each word in new line in uppercase
    */
    while(true)
    {

        string s;
        cin>>s;
        if(s.size() == 0)
        {
            break;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = upper(s[i]);
        }
        cout<<s<<endl;
    }
}

/*
Q.2. Jiya likes a sequence if all its elements when multiplied yields a number whose least significant digit is either 2, 3, or 5.
Input:-
First line contains t number of test cases
Every test case has first line as the number of integers the sequence contains followed by sequence in the next line
Output:-
print "YES" or "NO" whether jiya likes the sequence or not.
Constraints:-
1 <= t <= 100
1 <= n <= 15
1 <= Ai <= 10 for all i

Sample Input:-
2
5
2 2 2 2 2
4
2 2 2 2

Sample output:-
YES
NO
*/

/*
// solution of question 2:-
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long product = 1;
        for(int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
            product = product * x;
        }
        int digit = product % 10;
        if(digit == 2 || digit == 3 || digit == 5)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
*/
