/// week03.cpp �ϥ� C++ 2011 �~�s�����r�� stoi() �\��
/// �b Codeblock �̡A�����}�� Settings-Compiler... �� c++ 11 ���Ĥ�
/// SOIT106_ADVANCE_001 Uing C++

#include <iostream> /// cin Ū�J��ơBcout �L�X���
#include <string> ///string �r��\��

using namespace std; /// �ϥΡu�R�W�Ŷ��v�зǪ� std

int main(){
	string a; /// �ŧi�r�� a
	string ans; /// �ŧi�r�� ans �񵪮ץ�
	cin >> a; /// Ū�J�r�� a

	int N = a.length(); /// �r��a������
	for(int i=N-1; i>=0; i--){  /// �˹L�Ӫ��j��
		ans += a[i]; /// �b�j��̡A�� a[i] ��� ans ���᭱
	}

	cout << a << '+' << ans << '='
		 << stoi(a)+stoi(ans) << endl;
		 /// stoi  is "turn string to int" ��u�r��v�ܦ��u��ơv
		 /// endl is turn to next line
}

