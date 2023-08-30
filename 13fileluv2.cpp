#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Q.3. convert binary to decimal
    /*
    Input:-
    First Line: Integer T that denotes number of test cases(1 <= T <= 10^4).
    For each test case: Integer N for size of Binary String(1 <= N <= 60) and Binary String S.
    Input:-
    3
    4
    0001
    2
    10
    4
    1010
    */

    // solution of question 3
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long result = 0;
        long long power2 = 1;
        for (int i = s.size() - 1; i >= 0; --i)
        {
            int binary_digit = s[i] - '0';
            result = result + (binary_digit * power2);
            power2 = power2 * 2;
        }
        cout<<result<<endl;
    }
    
}

/*
Q.4. A vertex is considered as a point with both its coordinates as integers.
You are initially at the origin of a 2D surface. You can move by the following rules.
1. One move is counted as a vertex to an adjacent vertex. You cannot jump and can only move to an adjacent vertex.
For example, if you are at point A(x, y), then you may move to any of the points B, C, D, E(defined below),
A(x,y) to B(x,y-1) or C(x,y+1) or D(x+1,y) or E(x-1,y)

2. Distance from origin should increase with each move.
Distance from origin for a vertices (a,b) is:
Dis(a,b) = abs(a) + abs(b) where abs is absolute value

** Both the rules should be satisfied for each move.

For a given number of steps(N), calculate the count of possible final position vertices you may end in if you initially started from the origin.
Constraints:-
1 <= t <= 50
1 <= N <= 10^12

Input:-
First Line: Number of test cases(t)
Next t line: Integer N representing the number of steps

Sample Input:-
2
3
1
*/

/*
solution of question 4:-

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<4 * n<<endl;
    }
}
*/

/*
Q.5. Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiple of A or B or (A and B) in increasing order.
We take the C-th number of set and print from C-th number to 0 with a step value of A or B
whichever it is multiple of and if its a multiple of both, then use step value as LCM(A,B).

Constraints:-
2 <= A,B <= 1000(A and B will not be equal)
1 <= C <= 1000
Input format:
One line containing numbers A,B and C.
*/

/*
solution of question 5:-

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int cth_num;
    for(int i = 2; c > 0; i++)
    {
        if(i % a == 0 || i % b == 0)
        {
            c--;
            cth_num = i;
        }
    }
    int lcm;
    for(int i = 1; i <= a*b; ++i)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    int step;
    if(cth_num % a == 0 && cth_num % b == 0)
    {
        step = lcm;
    }
    else if(cth_num % a == 0)
    {
        step = a;
    }
    else
    {
        step = b;
    }
    for(int i = cth_num; i >= 0; i = i - step)
    {
        cout<<i<<" ";
    }
}
*/