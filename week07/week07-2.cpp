/// week07-2.cpp
/// �e�X�W�j�����, ��Ʀr�]�_��
/// TAICA ��j��¦�{���]�p(C++) ������ ��6�D
#include <iostream>
#include <cmath> /// �N�OC�� math.h �̭��� sin() cos() abs() sqrt()
using namespace std;

int main(){
    int n; /// Part1: Input
    cin >> n;

    for(int i=1; i<n*2; i++){     /// Part2 : Output
        for(int j=1; j<n*2; j++){
            /// �L�X�Ӥ���, �o�{�����ߪ�1�ܦ��N��]�I�F��
            int d = max(abs(i-n), abs(j-n)); /// abs() �O����Ȫ��ĪG
            cout << "  " << d+1;
        }
        cout << "  " << endl; /// cout << "�{�bi�O : " << i << endl; �Ӽh������
    }


    /// 2�|��3�h�ӡA3�|��5�h�ӡA4�|��7�h�ӡA5��9�h��

}
