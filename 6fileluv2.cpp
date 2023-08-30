#include<bits/stdc++.h>
using namespace std;

int main()
{
    // infinite loop
    /*
    while(1)
    {

    }
    */
   /*
   for(int i = 0;; ++i)
   {

   }
   */

    for(int j = 0; j < 10; ++j)
    {     
        for(int i = 0; i < 10; ++i)
        {
            if(i == 8)
            {
                if(true)
                {
                    if(true)
                    {
                        break;
                    }
                }
            }
            cout<<i<<endl;
        }
    }

    cout<<"Hello"<<endl;
    for(int j = 0; j < 10; ++j)
    {     
        for(int i = 0; i < 10; ++i)
        {
            if(i == 8)
            {
                if(true)
                {
                    if(true)
                    {
                        continue;;
                    }
                }
            }
            cout<<i<<endl;
        }
    }

    /*
    Q.1. Your program is to use the brute-force approach in order to find the Answer to Life, 
    the Universe, and Everything. More precisely... rewrite small numbers from input to output. 
    Stop processing input after reading in the number 42. All numbers at input are integers of 
    one or two digits.

    Example
    Input:
    1
    2
    88
    42
    99

    Output:
    1
    2
    88
    */
    
    // solution of Q.1.
    while(true)
    {
        int x;
        cin>>x;
        if(x == 42)
        {
            break;
        }
        cout<<x<<endl;
    }

    // sum of digits for t testcases
    // input:-
    // 1
    // 1234567

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int digit_sum = 0;
        while(n > 0)
        {
            int last_digit = n % 10;
            digit_sum = digit_sum + last_digit;
            n = n / 10;
        }
        cout<<digit_sum<<endl;
    }
}