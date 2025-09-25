/// week03-2b.cpp  璶糶2Ω
/// LeetCode 厩策璸礶材8肈 1822. Sign of the Product of an Array
/// р皚癬ㄓタ计璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; ///  0 ヴ计常穦跑Θ 0Τ1程ぐ或跑ぐ或
        for(int i=0; i<nums.size(); i++){    /// Τ碭计癹伴禲碭Ω
            if(nums[i]>0) ans*= +1;
            if(nums[i]<0) ans*= -1;
            if(nums[i]==0) ans *= 0;
            ///ans *= nums[i]; /// –Ωр nums[i] 秈 ans 柑
        }   /// 计禫禫
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
