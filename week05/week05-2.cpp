/// week05-2.cpp
/// ���x stringiostream

#include <iostream> /// cin, cout, getline Ū�g���
#include <sstream> /// stringstrea, �ݭn�L
#include <string>/// �ڭ̪��r�� string

using namespace std;
int main(){
    string s; /// �r�� s
    cout << "�п�J�@�q���^��A�̭��i���Ů�" << endl;
    getline (cin, s); /// �̦�Ū�J�@���, ��Js
    cout << "Ū��F s �r�� : " << s << endl;

    stringstream ss(s); /// �N�r�� s �ܦ� ss
    string word; /// �N�r�� word
    while( ss >> word ){
        cout << "���@�Ӧr" << word << endl;
    }
}
