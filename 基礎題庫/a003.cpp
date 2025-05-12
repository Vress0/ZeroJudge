/*
兩光法師時常替人占卜，由於他算得又快有便宜，因此生意源源不絕，時常大排長龍，他想算 得更快一點，因此找了你這位電腦高手幫他用電腦來加快算命的速度。

　　他的占卜規則很簡單，規則是這樣的，輸入一個日期，然後依照下面的公式：

M=月
D=日
S=(M*2+D)%3

得到 S 的值，再依照 S 的值從 0 到 2 分別給與 普通、吉、大吉 等三種不同的運勢

 
*/

#include <iostream>
using namespace std;

int main(){
    int M, D;
    cin >> M >> D;

    int S;
    S = (M * 2 + D) % 3;

    switch(S){
        case 0:
            cout << "普通" << endl;
            break;
        case 1:
            cout << "吉" << endl;
            break;
        case 2:
            cout << "大吉" << endl;
            break;
    }

    return 0;
}

/*
switch(變數名稱或運算式) {
    case 符合數字或字元:
        陳述句一;
        break;
    case 符合數字或字元:
        陳述句二;
        break;
    default:
        陳述三;
        break;
}
*/