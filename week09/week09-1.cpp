/// week09-1a.cpp
/// SOIT106_ADVANCE_004
#include <iostream>
#include <cctype>
using namespace std;
int main(){
	char c;
	while(cin >> c){
		if(isupper(c)) c = tolower(c);
		else if(islower(c)) c = toupper(c);
		cout << c;
	}
	cout << endl;
}

/// week09-1b.cpp
/// SOIT106_ADVANCE_004
/// can't use #include <cctype>
///#include <iostream>
///using namespace std;
///int main(){
///	char c;
///	while( cin >> c ){
///		if(c>='A'&&c<='Z') c = c - 'A' + 'a';
					/// take off 'A' cloth take on 'a'
///		else if(c>='a'&&c<='z') c = c - 'a' + 'A';
					/// take off 'a' cloth take on 'A'
///		cout << c;
///	}
///	cout << "\n";
}
