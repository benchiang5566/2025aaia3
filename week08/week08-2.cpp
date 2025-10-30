/// week08-2.cpp LeetCode 學習計畫 Matrix 矩陣第4題
/// 73. Set Matrix Zeroes
/// 要小心, 不能全部一起讀, 一邊設成0, 要兩階段 先讀完, 在設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        /// 第一階段, 先讀完, 記下來全部的零對應的 i 和 j
        int M = matrix.size(), N = matrix[0].size(); /// 左手 M, 右手 N
        vector<int> markI(M, 0), markJ(N, 0); /// 宣告 C++的陣列, 長度分別M, N, 裡面都設成0
        for(int i=0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(matrix[i][j] == 0) { /// 要記下來對應的 i 和 j
                    markI[i] = 1; /// 標記一下 i 的這整個橫條都輕為0
                    markJ[j] = 1; /// 標記一下 j 的這整個橫條都輕為0
                }
            }
        }
        /// 第 2 階段, 再照著 markI 和 markJ 的標記, 把整條都輕為0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 || markJ[j]==1) matrix[i][j] = 0;
            }
        }
    }
};
