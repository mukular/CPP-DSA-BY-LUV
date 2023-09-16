// contest questions
/*
Q.1. Joe has been burdened by the assignments given and continuous evaluations taken by his profs.
He wants to go for a trip over this weekend, but he has an assignment.
Help Joe in his assignment, the problem statement for the assignment is -
You are given two integers n and m, further you are given a sequence of n numbers.
Now for several query lets say q number of queries, for each query input
lets denote it with x, find the maximum value of (a[i] + x)%m possible.
Note:- a[i] is the i-th element of the sequence.

Input format:-
First line of input contains an integer n denoting the size of the array, and an integer m.
Second line contains n space separated integers of the array.
Third line contains the number of queries q.
Next q lines contain a query value x, for which we need to find the output.

Output format:-
For each query return the maximum value of (a[i]+value of q)%m possible, in separate line.

Constraints:-
1 <= n <= 10^5
1 <= m <= 10^8
0 <= a[i] <= 10^15
1 <= q <= 10^5
0 <= x <= 10^15

Sample Input:-
5 10
0 1 2 3 4
3 
1
6
9

Sample Output:-
5
9
9
*/

/*
// Solution of question 1:-

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
long long a[N];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; ++i)
    {
        cin>>a[i];
        a[i] %= m;
    }
    sort(a, a+n);
    int q;
    cin>>q;
    while(q--)
    {
        long long x;
        cin>>x;
        x %= m;
        long long *ptr = upper_bound(a, a+n,m-x-1);
        if(ptr != a)
        {
            ptr--;
        }
        cout<<max((a[n-1] + x)%m , (*ptr+x) %m)<<endl;
    }
}
*/

/*
Q.2. Well ,lazy to give a theme or backstory to the question too.
So, lets dive into the problem right away!
You are given N points in xy-plane. Determine the difference between maximum and minimum 
areas of rectangle formed from these points, with sides parallel to X and Y axes.
In case no rectangle can be formed, print -1.
Note, that the points used in one rectangle, may be used in another rectangle.
Also, it is guaranteed that the N points don't have duplicates. Refer test cases for further explanation.

Constraints:-
1 <= N <= 1000
0 <= x,y for each point <= 45000

Input format:-
First line contains N value.
Next N lines contain 2 space separated integers -"x y".

Output format:-
One line containing the difference or -1, which ever applicable.

Sample Input:-
6
10 0
0 10
10 2
0 0
0 2
10 10

Sample Output:-
80
*/

/*
// Solution of question 2:-

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<pair<int, int> > points_st;
    vector<pair<int, int> > points(n);

    for(int i = 0; i < n; ++i)
    {
        cin>>points[i].first>>points[i].second;
        points_st.insert(points[i]);
    }

    int ar_min = INT_MAX, ar_max = INT_MIN;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            auto p1 = points[i];
            auto p2 = points[j];
            if(p1.first == p2.first)
            {
                continue;
            }
            if(p1.second == p2.second)
            {
                continue;
            }
            if(p1.first > p2.first)
            {
                swap(p1, p2);
            }
            int x1 = p1.first, y1 = p2.second;
            int x2 = p2.first, y2 = p1.second;
            if(points_st.count({x1,y1}) && points_st.count({x2, y2}))
            {
                int ar = abs(p1.first - p2.first) * abs(p1.second  -p2.second);
                ar_min = min(ar_min, ar);
                ar_max = max(ar_max, ar);
            }
        }
    }
    if(ar_min = INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<ar_max - ar_min<<endl;
    }
}
*/

/*
Q.3. Luffy needs to reach grandline ASAP.Lufi's ship is K kilometers far from Grandline.
But luffy consumes 1 unit of food for every kilometer the ship covers and luffy can never be
hungry until he reaches grandline. There are N islands between ship's current position and grandline.
ith island is Di distance apart from grandline and has Ai amount of food. Luffy currently has 
F amount of food. You need to tell minimum number of islands luffy needs to stop at so that he
never is hungry before reaching grandline.
If its not possible to reach grandline without luffy being hungry then print -1.

Input:-
The first line of the input contains a single integer T denoting the number of test cases.
The first line of each test case contains a single integer N denoting number of islands.
The second line of each test case contains two integers K and F denoting the initial distance of ship 
from grandline and amount of food ship has initially. Next N lines contain two space separated 
integers Di and Ai denoting the distance of the island from Grandline and the amount of food in island.
Ship can take all the food from any island.

Output:-
For each test case print the minimum number of stops required
to reach grandline. If he cannot reach home print "-1".

Constraints:-
1 <= T <= 10
1 <= N <= 10^4
1 <= D <= K <= 10^6
1 <= A, F <= 10^6

Sample Input:-
2
4
25 10
20 5
10 10
22 2
23 4
5
25 7
12 4
11 3
3 4
17 4
2 19

Sample Output:-
2
-1
*/

/*
// Solution of question 3:-

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        long long f;
        cin>>n>>k>>f;
        vector<pair<int, int> > prs;
        for(int i = 0; i < n; ++i)
        {
            int dist, food;
            cin>>dist>>food;
            prs.push_back({k-dist, food});
        } 
        int ans = 0;
        multiset<int> food_avl;
        sort(prs.begin(), prs.end());
        bool can_reach = true;
        int cur = 0;
        for(int i = 1; i < k; ++i)
        {
            f--;
            if(prs[cur].first == i)
            {
                food_avl.insert(prs[cur].second);
                cur++;
            }
            if(f == 0)
            {
                if(food_avl.size() == 0)
                {
                    can_reach = false;
                    break;
                }
                else
                {
                    auto it = --food_avl.end();
                    f += (*it);
                    food_avl.erase(it);
                    ans++;
                }
            }
        }
        if(can_reach)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
*/

/*
Q.4. Sandeep Bhaiya has a wish which we want to be fulfilled, can you help him?
Each data in the Rajendra Nagar has 2 integer variables. In total Rajendra Nagar has n such datas.
Sandeep Bhaiya wants to calculate for each of the data how much data's are there which are
strictly smaller than this data.
Definition of a data being smaller than other is as follows:
data 1 is smaller than data 2 if sum of two integers in data 1 is less than that of data 2.
If sum of both are equal then one with the small value of first integer is smaller.
With this definition, you have the smaller one among the two, so obviously the other one is larger.
Note:- The data in rajendra nagar follows the property that no two data are exactly same, that is, no 
two will have same value of both the integers.

Input:-
first line has number of  test cases.
Each test case has n the number of datas, then n following lines have 2 integers
representing the first and the second integer of the data respectively.
summation of n over all test case <= 500000
0 <= Value of integer data <= 1e9

Output:-
For each test case, output one line having n integers, representing
how many datas are smaller than this data.
Ideal solution is attached so you can have answer for any test case you want.

Sample Input:-
1
3
3 4
1 2
5 6

Sample Output:-
1 0 2
*/

/*
Solution of question 4:-

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, pair<int, int> > p1, pair<int, pair<int, int> > p2)
{
    int s1 = p1.second.first+p1.second.second;
    int s2 = p2.second.first+p2.second.second;
    if(s1 != s2)
    {
        return s1 < s2;
    }
    return p1.second.first < p2.second.first;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int, pair<int, int> > > v(n);
        for(int i = 0; i < n; ++i)
        {
            v[i].first = i;
            cin>>v[i].second.first>>v[i].second.second;
        }
        sort(v.begin(), v.end(), cmp);
        vector<int> ans(n);
        for(int i = 0; i < v.size(); ++i)
        {
            ans[v[i].first] = i;
        }
        for(auto ele : ans)
        {
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}
*/