// p3: 小朋友走樓梯 (Climbing Stairs)
#include <iostream>
using namespace std;

// TODO: 實作 climb 遞迴函數
// 參數: n (樓梯階數)
// 回傳: 爬到第 n 階的方法數
// 提示: Base cases: climb(1) = 1, climb(2) = 2
//       Recursive case: climb(n) = climb(n-1) + climb(n-2)
int climb(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    else return climb(n-1)+climb(n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=0;
    cin >> n;
    cout << climb(n) <<endl;
    // TODO: 讀取 n 並呼叫 climb 函數，輸出結果
    
    return 0;
}
