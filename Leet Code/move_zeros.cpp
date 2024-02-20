#include<iostream>
#include<vector>
using namespace std;


void moveZeroes(vector<int>& nums) 
{
        //Count zeros
        int zeros=0;
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)
                    zeros+=1;
            }

        for(int i=0;i<=zeros;i++)
        {
            for(int j=0;j<nums.size()-1;j++)
            {
                if(nums[j]==0 && nums[j+1]!=0)
                    swap(nums[j],nums[j+1]);
            }
        }

            
}

int main()
{
    vector<int> nums{0,1,0,3,12,0,24,55,69};
    cout<<"Before : ";
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
    cout<<endl<<"After : ";
    moveZeroes(nums);
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
    return 0;
}