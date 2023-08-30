// arrays
#include<bits/stdc++.h>
using namespace std;

const int f = 1e7;
// global array // must have size constant so use const 
int brr[f];

int main()
{
    // input:-
    /*
    5
    2 3 4 5 6
    */
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum = sum + a[i];
    }
    cout<<sum<<endl;

    /*
    input:-
    3 4
    1 2 3 4
    5 6 7 8
    9 10 11 12
    */

   // 2-d array
   int n1, m1;
   cin>>n1>>m1;
   int arr[n1][m1];
   for (int i = 0; i < n1; ++i)
   {
    for (int j = 0; j < m1; ++j)
    {
        cin>>arr[i][j];
    }
   }

   for (int i = 0; i < n1; ++i)
   {
    for (int j = 0; j < m1; ++j)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

   // local(matlab jo global nhi h) array apan 10^5 size ke order ka hi bana sakte h
   // global array apan 10^7 size ke order ka hi bana sakte h


}