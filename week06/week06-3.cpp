/// week06-3.cpp
/// LeetCode �ǲ߭p�e Simulation ���� ��1�D 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations){ /// C++ �i���j��
            /// cout << op << endl; // �ոլݡA�|�L�X�ƻ�F��
            if(op[0]=='+'){ /// �⥽��Ƭۥ[
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back( temp+temp2 );
            }else if(op[0]=='D'){ /// �ƻs�̫�1��u�bDouble��2���v�A�b��^�h
                a.push_back( a.back()*2 );
            }else if(op[0]=='C'){ /// �R���̫�1��
                a.pop_back();
            }else { /// �� stoi(op) ���, ��^�h
                a.push_back( stoi(op) );
            }
        }
        /// �̫�, �� for �j��, ��}�C a ����, �����[�_��
        int ans = 0;
        for(int  now : a) { /// C++ �i���j��, �]�i�H�� for(int i=0; i<a.size(); i++) { int now = a[i]
            ans += now;
        }
        return ans; /// ���H�K return 0 ���@�U�A��
    }
};
