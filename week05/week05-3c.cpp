/// week05-3c.cpp Part1: Input, Part2: Output
/// Part3: stringstream Part4: reverse �ϹL��
/// Part5: �����Y + ���[ + ���[ + ...
/// CPE ��2�D UVA 483 �˹L��

#include <iostream>
#include <sstream> /// Part3: stringstream ���ɮ׬O sstream
#include <algorithm> /// Part4: reverse ���t��k
using namespace std;
int main(){
    string line; /// �@��r���r�� Part 1: Input
    while( getline(cin, line) ){/// Ū�i��
        stringstream ss(line);  /// Part3: �� stringstream �_�r
        string word; /// �r��b�o��
        /*===========================================*/
        ss >> word; /// Part5 �����Y�b�o��
        reverse( word.begin(), word.end() );
        cout << word; /// �u�����Y�v�S���Ů�
        /*===========================================*/
        while( ss >> word ){ /// Part3: �� ss �_�r
            reverse( word.begin(), word.end() ); /// Part 4
            cout << " " << word; /// Part5: +���[
            ///cout << "Ū��F" << word << endl; /// Part 3
        }
        cout << endl ;///<< line << endl;/// Part2: Output
    }
}
