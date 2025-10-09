/// week05-5b.cpp
/// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main(){
	int now, M=-9999, m=9999;


	for(int i=0; i<6; i++){ /// head to tail
		cin >> now;
		if(now>M) M=now;
		if(now<m) m=now;
	}
	cout << M-m;
}
