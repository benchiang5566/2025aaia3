/// week05-3b.cpp Part1: Input, Part2: Output
/// Part3: stringstream Part4: reverse �ϹL��
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
        while( ss >> word ){ /// Part3: �� ss �_�r
            reverse( word.begin(), word.end() ); /// Part 4
            cout << "Ū��F" << word << endl; /// Part 3
        }
        cout << line << endl;/// Part2: Output
    }
}
