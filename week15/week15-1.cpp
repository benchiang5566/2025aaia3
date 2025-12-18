
/// week15-1.cpp 學習計畫 Basic 第4題
/// LeetCode 242. Valid Anagram 請問是否倆字串有相關

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; ///長度不一楊
        int H[256] = {};
        /// 先針對 s 字串, 逐一放入 H 陣列
        for(char c : s){ /// C++ 的進階 for 迴圈
            H[c]++; /// 把「字母」對應的格子
        }
        /// 再針對 t 字串, 逐一拿出 H 陣列
        for(char c : t){
            H[c]--; /// 把「字母」對應的格子 --
            if(H[c]<0) return false; ///22 前面累計的字母「不夠用」
        }
        /// 沒有失敗的話
        return true; /// 就成功
    }
};


