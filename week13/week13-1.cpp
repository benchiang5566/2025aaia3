/// week13-1.cpp 聖誕倒數寫程式 Advent of Code 2025 第1天第1周
/// Moodle 點擊 adventofcode.com 網址 可看到黑底 白字的題目
/// 點擊頭像, 在 LeetCode 的 My Playground 我的遊戲場,可以寫程式碼
/// LeetCode 幫你把 #include 全部都加好了, 你不用再寫 #include
/// 右下角 stdin 可以貼上你的程式碼 Input
/// 在 adventofcode.com 登入你的 Github 帳號後, 便可以看到你的專屬謎題 Input
/// 貼到右上角 stdin 後, 在執行, 看你的答案是多少 ( 每個人都不一樣 )
int main() {
    char c; /// 字母, 對應方向 L 左轉 R 右轉
    int d; /// 數字, 要轉動幾格
    int now = 50;/// 一開始的密碼鎖, 指向 50
    int ans = 0; /// 轉動時, 有幾次停在 0 的地方? (我們的通關密碼)
    while( cin >> c >> d ){/// 一直讀資料 : 獨字母、讀數字
        ///if(c=='L') cout << "往左轉" << d << "格\n";
        ///if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now = now - d; /// 減掉
        if(c=='R') now = now + d; /// 加上

        now = ( now % 100 + 100 ) % 100 ; /// 太大的、太小的, 都限制在 0~99 中間
        ///cout << "現在的刻度是 : " << now << endl;
        if (now==0) ans ++; /// 轉動時, 有幾次停在 0 的地方 (我們的通關密碼)
    }
    cout << "答案是: " << ans;
}
/**Input : 從題目剪貼備份的 Input
L68
L30
R48
L5
R60
L55
L1
L99
R14
L82
**/
