#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

  int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int>times;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                times.push_back(count);
            }
            else{
                count=0;
                times.push_back(count);

            }
        }
        return *max_element(times.begin(),times.end());
    }

int main()
{
    vector<int>nums={1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums);
    return 0;
}