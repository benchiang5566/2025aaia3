/// week02-2b.cpp Part 1
/// SOIT106_ADVANCE_001 Uing C++

#include <iostream> /// cin cout
#include <string> ///string

using namespace std;

int main(){
	string a;
	string ans;
	cin >> a;

	int N = a.length();
	for(int i=N-1; i>=0; i--){
		ans += a[i];
	}

	cout << a << '+' << ans << '='
		 << stoi(a)+stoi(ans) << endl;
		 /// stoi  is "turn string to int"
		 /// endl is turn to next line
}

