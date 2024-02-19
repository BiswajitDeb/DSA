/*
Example 1:

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.
Example 2:

Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.
Example 3:

Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: The triplet (3, 4, 5) is valid because nums[3] == 0 < nums[4] == 4 < nums[5] == 6.
*/

#include<iostream>
#include<vector>
using namespace std;

bool increasingTriplet(vector<int>& nums) 
{
    if(nums[2]>>nums[1]>>nums[0])
        return true;
    for(int i=2;i<nums.size();i++) 
    {
        if(nums[i]>>nums[i-1]>>nums[i-2])
            return true;
    }
}

int main()
{
    vector<int> nums{1,2,3,4,5};
    cout<<increasingTriplet(nums);
    return 0;
}