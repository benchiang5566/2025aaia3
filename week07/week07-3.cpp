/// week07-3.cpp �ǲ߭p�e Sumlation ��3�D
/// 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public: /// vector �O C++ ���}�C, ���Y�ۦp, ���O 2D ������g
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {}; /// C�y�����}�C, �j�@�йL, ����²��
        int now = 1; /// �{�b�����a1: ���aA, 2: ���aB
        int winner = 0;
        /// {}�j�A���N���l��, �u�̭��Ū��v�N���O0
        for(vector<int>move : moves){
            int i = move[0], j = move[1];
            a[i][j] = now; /// ��X�l, �U�b�}�C��
            /// �U����, �n�ˬd�u���S���o�ӡv!
            if(now==a[i][0] && now==a[i][1] && now==a[i][2]) winner = now; /// ��u
            if(now==a[0][j] && now==a[1][j] && now==a[2][j]) winner = now; /// ���u
            if(now==a[0][0] && now==a[1][1] && now==a[2][2]) winner = now; /// ���W�k�U
            if(now==a[0][2] && now==a[1][1] && now==a[2][0]) winner = now; /// �k�W���U
            if(now==1) now = 2; /// ��H�n����
            else now = 1; /// �� 2��1
        }
        if (winner==1) return "A";
        else if (winner==2) return "B";
        else if (moves.size()==9) return "Draw"; /// ���⪺�^�� Draw
        else return "Pending"; /// �e�X�h, �o�{�٦���4�إi��, �� Pending �٨S�U���ګ�

    }
};
