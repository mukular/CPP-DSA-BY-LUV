#include<bits/stdc++.h>
using namespace std;

/*
Q.1. Given an integer array nums of unique elements, return all possible 
subsets(the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/
// for n elements, number of subsets = 2^n

vector<vector<int> > subsets;

// Time Complexity of generate function = O(2^n)
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if(i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    generate(subset, i+1, nums);

    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
}

int main()
{
    // input:-
    // 3
    // 1 2 3
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>nums[i];
    }

    vector<int> empty;
    generate(empty, 0, nums);

    for(auto subset : subsets)
    {
        for(auto ele : subset)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    
}