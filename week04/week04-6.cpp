/// week04-6.cpp
/// �m�ߦU�ءu���Y�ۦp���}�C�vvector<int> a ����l��
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a; /// (1) �S�������l�ưѼ�, ���׬O 0
    cout << "�}�Ca �����׬O " << a.size() << endl;

    vector<int> b(3);/// (2) ���ӰѼ�, ���������ܦ� 3
    cout << endl << "�}�Cb �����׬O " << b.size() << endl;
    for(int i=0; i<b.size(); i++) cout << b[i] << " ";

    vector<int> c(3,88); /// (3) ���׬O 3, �̭����� 88
    cout << endl << "�}�C c �����׬O " << c.size() << endl;
    for(int i=0; i<c.size(); i++) cout << c[i] << " ";

    int d[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; /// c�y�����}�C
    vector<int> f( d, d+4); /// ��C���}�C���u�Y�ӽd��v�Ӫ�l�� 4 ��
    cout << endl << "�}�C f �����׬O " << f.size() << endl;
    for(int i=0; i<f.size(); i++) cout << f[i] << " ";

    vector<int> g( d, d+10); /// ��C���}�C���u�Y�ӽd��v�Ӫ�l�� 10 ��
    cout << endl << "�}�C g �����׬O " << g.size() << endl;
    for(int i=0; i<g.size(); i++) cout << g[i] << " ";

    cout << endl;

}
