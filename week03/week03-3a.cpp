/// week03-3a.cpp �G�X�@��1�ؤ�k �⤣�O0����X��
/// LeetCode �ǲ߭p�e��6�D 283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        } /// �W����u���O0���ơv�Ȯɩ�b ans �̡A���@�U�A��^�h
        /// �A�� for �j���^�h

        for(int i=0; i<nums.size(); i++){
            if(i < ans.size()) nums[i] = ans[i]; /// ��^�h
            else nums[i] = 0; /// ��L����0
        }
    }
};
