/// week03-2b.cpp �G�X�@ �n�g2��
/// LeetCode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
/// ��}�C���_�ӡA�ݥ��ơB�t�ơB�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// �]�� 0 ������ơA���|�ܦ� 0�A�u��1�̨ġA�������ܤ���
        for(int i=0; i<nums.size(); i++){    /// �ݦ��X�ӼơA�j��]�X��
            if(nums[i]>0) ans*= +1;
            if(nums[i]<0) ans*= -1;
            if(nums[i]==0) ans *= 0;
            ///ans *= nums[i]; /// �C���� nums[i] ���i ans ��
        }   /// �Ʀr�V���V�j
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
