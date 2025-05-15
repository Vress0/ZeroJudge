



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