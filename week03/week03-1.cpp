/// week03-1.cpp
/// Filse-Save As �s�ɮɡA�n���ɦW�g��

#include <iostream> /// C++ �� cin cout
#include <vector> /// C++ ���}�C vector

using namespace std;

int main(){
    vector<int> a(2); /// ���ӦC, �̭���2��(�}�C���j�p�O2)

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// �L�X�}�C
    cout << endl; /// ����

    a.push_back(99); /// �� 99 ����}�C a ����᭱ .push_back()
    a.push_back(77); /// �� 77 ����}�C a ����᭱

    for(int i=0; i<a.size(); i++) cout << a[i] << ' '; /// �L�X�}�C
    cout << endl; /// ����
}
