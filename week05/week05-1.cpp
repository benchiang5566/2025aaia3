/// wek05-1.cpp
/// LeetCode �ǲ߭p�e Bulit-In Funtions ��1�D 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); /// ��r��A�ܦ����e�Ъ� cin iostream
        string word; /// �r�ꪺ word
        ///ss >> word; /// �ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F" << word << endl;
        ///ss >> word; /// �ܹ����e�Ъ� cin >> word
        ///cout << "Ū��F" << word << endl;

        while( ss >> word ){ /// �@��Ū�i��
            /// �̭��ƻ򳣤���
        }
        return word.length(); /// �̧q�r������ /// return 0; /// �H�K
    }
};
