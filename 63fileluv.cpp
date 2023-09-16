// subset generation using bitmask
// subsets of n sized array = 2^n
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums)
// Time Complexity = O((2^n)*n) where n is array size
{
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int> > subsets;
    for(int mask = 0; mask < subset_ct; ++mask)
    {
        vector<int> subset;
        for(int i = 0; i < n; ++i)
        {
            if((mask & (1<<i)) != 0)
            {
                subset.push_back(nums[i]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main()
{
    // Input:-
    // 3
    // 2 4 5
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }

    auto all_subsets = subsets(v);
    for(auto subset :all_subsets)
    {
        for(int ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }

}