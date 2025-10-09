/// wek05-1.cpp
/// LeetCode 學習計畫 Bulit-In Funtions 第1題 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// 把字串，變成之前教的 cin iostream
        string word; /// 字串的 word
        ///ss >> word; /// 很像之前教的 cin >> word
        ///cout << "讀到了" << word << endl;
        ///ss >> word; /// 很像之前教的 cin >> word
        ///cout << "讀到了" << word << endl;

        while( ss >> word ){ /// 一值讀進來
            /// 裡面甚麼都不做
        }
        return word.length(); /// 最吼字的長度 /// return 0; /// 隨便
    }
};
