#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;

    for (int i; i <= x + 1;i++){
        i += 1;
        if (x % i == 0){
            cout << i;
        }
        else
            break;
    }

    return 0;
}