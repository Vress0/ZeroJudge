#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 2; i <= x; i++) {
        int count = 0;
        while (x % i == 0) {
            x /= i; // 把這個因數從 x 中除掉。
            count++; // 計數器加 1
        }
        if (count > 0) {
            cout << i;
            if (count > 1)
                cout << "^" << count;
            if (x > 1)
                cout << " * ";
        }
    }

    return 0;
}
