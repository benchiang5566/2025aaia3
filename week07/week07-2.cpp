/// week07-2.cpp
/// 畫出超大正方形, 把數字包起來
/// TAICA 交大基礎程式設計(C++) 期中考 第6題
#include <iostream>
#include <cmath> /// 就是C的 math.h 裡面有 sin() cos() abs() sqrt()
using namespace std;

int main(){
    int n; /// Part1: Input
    cin >> n;

    for(int i=1; i<n*2; i++){     /// Part2 : Output
        for(int j=1; j<n*2; j++){
            /// 印出來之後, 發現正中心的1很有意思也點東西
            int d = max(abs(i-n), abs(j-n)); /// abs() 是絕對值的效果
            cout << "  " << d+1;
        }
        cout << "  " << endl; /// cout << "現在i是 : " << i << endl; 樓層的概念
    }


    /// 2會有3層樓，3會有5層樓，4會有7層樓，5有9層樓

}
