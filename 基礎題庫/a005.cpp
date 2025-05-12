#include <iostream>
 
using namespace std;
 
int main(){
    // 數列的數目
    int t;
    cin >> t;
 
    // 數列
    int s[5];
 
    for (int i = 0; i < t; i++) {   // 總共要做多少次
       
        //input
        for (int j = 0; j < 4;j++){     //不能等於4，因為第四個是我們要輸入的
            cin >> s[j];
        }
 
        // 判斷是等差還是等比
 
        //等差
        if(s[1]-s[0]==s[2]-s[1]){
            //公差
            double d;
            d = s[1] - s[0];
            s[4] = s[3] + d;
 
            //輸出
            for (int i = 0; i < 5;i++){
                cout << s[i] << " " ;
            }
            cout << endl;
        }
        //等比
        else{
            double r;
            r = s[1] / s[0];
            s[4] = s[3] * r;
 
            //輸出
            for (int i = 0; i < 5;i++){
                cout << s[i] << " " ;
            }
            cout << endl;
        }
 
 
    }
}
 
    /*
    array
    int a[有幾項]
 
    ex.int a[3] -> 範圍是 0 ~ n-1
    */