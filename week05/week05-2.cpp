/// week05-2.cpp
/// 熟悉 stringiostream

#include <iostream> /// cin, cout, getline 讀寫資料
#include <sstream> /// stringstrea, 需要他
#include <string>/// 我們的字串 string

using namespace std;
int main(){
    string s; /// 字串 s
    cout << "請輸入一段的英文，裡面可有空格" << endl;
    getline (cin, s); /// 依次讀入一整行, 放入s
    cout << "讀到了 s 字串 : " << s << endl;

    stringstream ss(s); /// 將字串 s 變成 ss
    string word; /// 將字串 word
    while( ss >> word ){
        cout << "有一個字" << word << endl;
    }
}
