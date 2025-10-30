/// week08-2.cpp LeetCode �ǲ߭p�e Matrix �x�}��4�D
/// 73. Set Matrix Zeroes
/// �n�p��, ��������@�_Ū, �@��]��0, �n�ⶥ�q ��Ū��, �b�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /// �Ĥ@���q, ��Ū��, �O�U�ӥ������s������ i �M j
        int M = matrix.size(), N = matrix[0].size(); /// ���� M, �k�� N
        vector<int> markI(M, 0), markJ(N, 0); /// �ŧi C++���}�C, ���פ��OM, N, �̭����]��0
        for(int i=0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(matrix[i][j] == 0) { /// �n�O�U�ӹ����� i �M j
                    markI[i] = 1; /// �аO�@�U i ���o��Ӿ��������0
                    markJ[j] = 1; /// �аO�@�U j ���o��Ӿ��������0
                }
            }
        }
        /// �� 2 ���q, �A�ӵ� markI �M markJ ���аO, ����������0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }
        }
    }
};
