// p4: McCarthy 91 函數 (F91)
#include <iostream>
using namespace std;

// TODO: 實作 f91 遞迴函數
// 參數: n (正整數)
// 回傳: f91(n) 的值
// 提示: if (n >= 101) return n - 10;
//       else return f91(f91(n + 11));
int f91(int n) {
    if(n<=100) return f91(f91(n+11));
    else return n-10;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=0;
    cin >> n;
    cout << f91(n) <<endl;
    // TODO: 讀取 n 並呼叫 f91 函數，輸出結果
    
    return 0;
}
