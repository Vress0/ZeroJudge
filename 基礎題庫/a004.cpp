#include <iostream>
using namespace std;

int main(){
    int y;

    while(cin >> y){        //因為是EOF(就是一直輸入到無資料可讀啦)，所以要一直輸入

    //西元年被4整除且不被100整除，或被400整除者即為閏年
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){               //"&&優先於"||"，所以要括號
        cout << "Civil year" << endl;
        break;
    }
    else{
        cout << "Normal year" << endl;
    }
    }

    return 0;
}

