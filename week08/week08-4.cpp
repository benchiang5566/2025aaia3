/// week08-4.cpp
/// 數字黑洞 卡布列克常數 6174 (大到小 - 小到大, 重覆7次)
#include <iostream>
#include <vector> /// 伸縮自如的陣列
#include <algorithm> /// 演算法 sort() 是演算法喔~
using namespace std;

int main(){
    cout << "請輸入任意4位數(都不同): ";/// ex: 1234 1 2 3 4
    int n;
    cin >> n;
    for(int i=0; i<7; i++){ /// 七步內, 必定掉進黑洞 6174
        vector<int> a; /// 伸縮自如的陣列
        while(n>0){ /// 剝皮法, 把4位數, 逐一剝出來
            a.push_back(n%10); /// 把它推到陣列裡面
            n = n/10; /// 剝皮法, 就瘦了
        }
        sort( a.begin(), a.end() ); /// 把陣列「從小到大好」
        int M = a[3]*1000 + a[2]*100 + a[1]*10 + a[0]; /// 倒過來變成4位數
        int m = a[0]*1000 + a[1]*100 + a[2]*10 + a[3]; /// 原本讀入的數變成4位數
        /// 等一下, M 是甚麼? m 是甚麼? 還沒發明
        n = M - m;
        cout << M << "減掉" << m << "得到" << n << endl;
    }
}
