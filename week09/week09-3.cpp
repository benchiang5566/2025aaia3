/// week09-3.cpp Matrix 學習計畫 第3題
/// LeetCode 54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int up=0, down=M-1, left=0, right=N-1;
        /// 先把上下左右的邊界, 都宣告一個變數的初始值
        vector<int> ans;

        while(up <= down && left <= right){ /// 往右, 人類容易理解的迴圈, 從 left 到 right
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[up][i]);
            }
            up++; /// AI助手，要寫 up++ 上邊界內縮

            for(int i=up; i<=down; i++){    /// 往下, 人類容易理解的迴圈, 從 up 到 down
              ans.push_back(matrix[i][right]);
            }
            right--; /// AI 助手說, 是右邊界內縮

            if(! (up<=down && left<=right)) break; /// 邊界超過範圍、交叉, 沒辦法繼續

            for(int i=right; i>=left; i--){ /// (倒過來走過一遍)
                ans.push_back(matrix[down][i]);
            }
            down--;/// 下界在進行內縮

            for(int i=down; i>=up; i--){
                ans.push_back(matrix[i][left]);
            } /// 倒過來的迴圈往上
            left++; /// 上界進行內縮
        }
            return ans; /// 全部走過一遍，回傳ans
    }
};
