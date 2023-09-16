/*
// contest questions

Q.1. Doraemon is planning to clean his pocket and arrange all his gadgets according
to a particular order so that he can find the gadgets easily whenever Nobita cries for
help. He wasn't able to find his "Sort Everything" gadget so he asks for your help.
He will give you points in return to help you secure rank in the contest.
He will give you two arrays as input. First array contains the ID number of all his gadgets.
The second array contains the order in which he wants you to arrange some of his favourite
gadgets in the beginning. Then add the remaining gadgets in the sorted order of their ID.
It is possible that gadget ID present in second array might not be present in first array. 
First array can contain duplicate gadget IDs, no duplicates in the second array is allowed.

Input Format:-
First line contains number of testcases.
Each test case is of 4 lines.
First line contains the size of the array N.
Second line contains the first array A1 of size N.
Third line contains the size of the array M.
Fourth line contains the second array A2 of size M.

Output Format:-
It consists of T lines.
One line represents the sorted order of the pocket for that test case.

Constraints:-
0 < T < 5
0 < N, M <= 10^5
0 < A1[i], A2[i] <= 10^9

Sample Input:-
2
6
5 3 2 15 10 7
2
7 2
10
3 3 1 1 8 9 4 5 10 2
4
3 6 9 1

Sample Output:-
7 2 3 5 10 15
3 3 9 1 1 2 4 5 8 10
*/

/*
// Solution of question 1:-
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, x;
        cin>>n;
        multiset<int> gadgets;
        for(int i = 0; i < n; ++i)
        {
            cin>>x;
            gadgets.insert(x);
        }
        cin>>m;
        for(int i = 0; i < m; ++i)
        {
            int x;
            cin>>x;
            int count_x = gadgets.count(x);
            while(count_x--)
            {
                cout<<x<<" ";
            }
            gadgets.erase(x);
        }
        for(auto gadget: gadgets)
        {
            cout<<gadget<<" ";
        }
        cout<<"\n";
    }
}
*/

/*
Q.2. There are M covid centres denoted by IDs 0 to M-1 located on a circular
path(centre 1 is right to centre 0, centre 2 is right to centre 1, ... centre 0 is
right to centre M-1). Each centre can treat only one patient at a time.
There are N patients and two arrays, arrival and treatment of length N is given.
arrival denotes that ith patient arrives to (i%M)th centre on arrival[i]th day.
If the centre is occupied, then they try getting admitted to the closest vacant centre
clockwise right to the (i%M)th centre.
If no centre is vacant, then the patient leaves.
Once admitted in a centre, the patients gets treated for treatment[i] days there and then leaves.
Output M values in which ith value denotes the number of patients treated by ith covid centre in total.
Note:- arrival[i] and treatment[i] is the i-th element of the array, arrival and treatment respectively.
(0-indexing is followed)

Input Format:-
First line of input contains an integer n denoting the number of patients and an integer 
m denoting the number of centres.
Second line contains n space separated integers of the array arrival.
Third line contains n space separated integers of the array treatment.

Output Format:-
Output M space separated integers in which ith value denotes the number of 
patients treated by ith covid centre.

Constraints:-
1 <= N, M <= 10^5
1 <= arrival[i], treatment[i] <= 10^8
All the values of arrival are in strictly increasing order.

Sample Input:-
5 3
1 3 6 7 10
6 10 1 10 1

Sample Output:-
2 1 2
*/