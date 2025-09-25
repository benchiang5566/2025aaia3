/// week03.cpp 使用 C++ 2011 年新版的字串 stoi() 功能
/// 在 Codeblock 裡，必須開啟 Settings-Compiler... 把 c++ 11 打勾勾
/// SOIT106_ADVANCE_001 Uing C++

#include <iostream> /// cin 讀入資料、cout 印出資料
#include <string> ///string 字串功能

using namespace std; /// 使用「命名空間」標準的 std

int main(){
	string a; /// 宣告字串 a
	string ans; /// 宣告字串 ans 放答案用
	cin >> a; /// 讀入字串 a

	int N = a.length(); /// 字串a的長度
	for(int i=N-1; i>=0; i--){  /// 倒過來的迴圈
		ans += a[i]; /// 在迴圈裡，把 a[i] 塞到 ans 的後面
	}

	cout << a << '+' << ans << '='
		 << stoi(a)+stoi(ans) << endl;
		 /// stoi  is "turn string to int" 把「字串」變成「整數」
		 /// endl is turn to next line
}

