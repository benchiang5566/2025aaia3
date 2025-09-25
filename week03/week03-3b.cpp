/// week03-3b.cpp 二合一第2種方法 直接移動
/// LeetCode 學習計畫第6題 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; /// 直接移動 nums[k] = nums[i]

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }

        for(int i=k; i<nums.size(); i++){
            nums[i] = 0; /// 其他的放0
        }
    }
};
