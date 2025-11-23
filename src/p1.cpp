// p1: Calculator (Function Practice)
#include <iostream>
using namespace std;

// TODO: 實作 calculate 函數
// 參數: opcode (1-4), num1, num2
// 回傳: 根據 opcode 計算的結果
int calculate(int opcode, int num1, int num2) {
    int ans=0;
    if(opcode==1) ans=num1+num2;
    if(opcode==2) ans=num1-num2;
    if(opcode==3) ans=num1*num2;
    if(opcode==4) ans=num1/num2;
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int opcode=0,num1=0,num2=0;
    while(cin >> opcode >> num1 >> num2){
    cout << calculate(opcode,num1,num2) <<endl;}
    // TODO: 讀取輸入並呼叫 calculate 函數
    // 提示: 使用 while(cin >> opcode >> num1 >> num2) 來讀取到 EOF
    
    return 0;
}
