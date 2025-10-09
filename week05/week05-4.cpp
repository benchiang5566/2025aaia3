/// week05-4.cpp
/// LeetCode 學習計畫 Bilt-In Function 第2題 709. To Lower Case

class Solution {
public:
    string toLowerCase(string s) { /// 每一個字母
        for(int i=0; i<s.length(); i++){ /// 變成小寫
            s[i] = tolower( s[i] );
        } /// 每個字母, 都變成小寫 (完整版要 #include <ctype.h>)
        /// 或是用 #include <cctype> 兩個是同一個檔案
        return s; /// 答案送出去
    }
};
