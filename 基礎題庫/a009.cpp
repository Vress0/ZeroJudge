/*
getline(cin,變數)
輸入直到輸入換行為止
單獨cin 是直到輸入空白或換行為止

*/

/*
K值
1 的ASCII Code = 49
* 的ASCII Code = 42
K = 49 - 42 = 7
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;

    int i;

    getline(cin, str);

    for (i = 0; i < str.size();i++)
    {
        cout << char(str[i] - 7);
    }

    return 0;

}