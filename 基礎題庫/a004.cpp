#include <iostream>
using namespace std;

int main(){
    int y;

    while(cin >> y){        //�]���OEOF(�N�O�@����J��L��ƥiŪ��)�A�ҥH�n�@����J

    //�褸�~�Q4�㰣�B���Q100�㰣�A�γQ400�㰣�̧Y���|�~
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){               //"&&�u����"||"�A�ҥH�n�A��
        cout << "Civil year" << endl;
        break;
    }
    else{
        cout << "Normal year" << endl;
    }
    }

    return 0;
}

