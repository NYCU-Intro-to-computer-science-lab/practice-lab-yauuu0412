// p2: Recursion Sum (遞迴求和)
#include <iostream>
using namespace std;

// TODO: 實作 sum 遞迴函數
// 參數: n (正整數)
// 回傳: 1 + 2 + 3 + ... + n 的總和
// 提示: Base case: n == 1 時回傳 1
//       Recursive case: 回傳 n + sum(n-1)
int sum(int n) {
    if(n==0)return 0;
    if(n==1)return 1;
    else return n+sum(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n=0;
    cin >> n;
    cout << sum(n) <<endl;
    // TODO: 讀取 n 並呼叫 sum 函數，輸出結果
    
    return 0;
}
