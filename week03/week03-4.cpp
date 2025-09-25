/// week03-4.cpp
/// LeetCode 挑戰題(賺金幣題) 120. Triangle 找到最上面往下走的最小值
class Solution { // 使用「動態規劃」慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        /// triangle[i][j] 第i層的第j個
        int N = triangle.size(); /// 總共幾層
        /// 從上往下查，最下面的第 N-1 層，沒問題，從 N-2 往上更新
        for(int i=N-2; i>=0; i--){
            for(int j=0; j<=i; j++){
            triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
            /// 每個人，要看它下面2個選擇(正下方、下方偏右)，找最小的那一個
            }
        }
        return triangle[0][0];
    }

};
