/*
 * 两数之和
 * 法1：
 * 双for循环，暴力求解
 * 对于每个元素，我们都对其余下的元素进行遍历，将花费O(n)的时间
 * 时间复杂度：O(n*n)
 * 空间复杂度：O(1)
 * 
 *
 * 
 */


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        for(i = 0;i <nums.size()-1;i++)
        {
            for(j = i+1; j < nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                }
            }
            
        }
        return {i,j};
    }
};


