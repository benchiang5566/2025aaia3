/// week05-3b.cpp Part1: Input, Part2: Output
/// Part3: stringstream Part4: reverse 反過來
/// CPE 第2題 UVA 483 倒過來

#include <iostream>
#include <sstream> /// Part3: stringstream 的檔案是 sstream
#include <algorithm> /// Part4: reverse 的演算法
using namespace std;
int main(){
    string line; /// 一行字的字串 Part 1: Input
    while( getline(cin, line) ){/// 讀進來
        stringstream ss(line);  /// Part3: 用 stringstream 斷字
        string word; /// 字放在這裡
        while( ss >> word ){ /// Part3: 用 ss 斷字
            reverse( word.begin(), word.end() ); /// Part 4
            cout << "讀到了" << word << endl; /// Part 3
        }
        cout << line << endl;/// Part2: Output
    }
}
