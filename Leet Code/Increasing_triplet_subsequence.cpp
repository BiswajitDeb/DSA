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
#include<climits>
using namespace std;

bool increasingTriplet1(vector<int>& nums) 
{
    vector<int> left_min;
    vector<int> right_max;
    int min=nums[0],max=nums[nums.size()-1];
    for(int i=0,j=nums.size()-1;i<nums.size(),j>=0;i++,j--)
    {
        if(nums[i]<=min)
        {
            left_min.push_back(nums[i]);
            min=nums[i];
        }
        if(nums[j]>=max)
        {
            right_max.push_back(nums[j]);
            max=nums[j];
        }
    }
    
    for(int i=0;i<nums.size();i++)
    {
        if(left_min[i]>>nums[i]>>right_max[i])
            return true;
    }
    return false;
}

bool increasingTriplet2(vector<int>& nums)
{
    int n = nums.size();
    if (n < 3) 
        return false;

    int first = INT_MAX, second = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        if (nums[i] <= first) 
            first = nums[i];
        else if (nums[i] <= second)
            second = nums[i];
        else
            return true;
    }
    return false;
}
int main()
{
    vector<int> nums{5,4,3,2,1};
    cout<<"Method 1: ";
    cout<<increasingTriplet1(nums)<<endl;
    cout<<"Method 2 : ";
    cout<<increasingTriplet2(nums);
    return 0;
}