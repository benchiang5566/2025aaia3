/// week05-4.cpp
/// LeetCode �ǲ߭p�e Bilt-In Function ��2�D 709. To Lower Case

class Solution {
public:
    string toLowerCase(string s) { /// �C�@�Ӧr��
        for(int i=0; i<s.length(); i++){ /// �ܦ��p�g
            s[i] = tolower( s[i] );
        } /// �C�Ӧr��, ���ܦ��p�g (���㪩�n #include <ctype.h>)
        /// �άO�� #include <cctype> ��ӬO�P�@���ɮ�
        return s; /// ���װe�X�h
    }
};
