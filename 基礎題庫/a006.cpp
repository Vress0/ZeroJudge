#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    double Test = pow(b, 2) - 4 * a * c;       //b^2-4ac
    //兩根
    if(Test>0){
        double r1 = (-b + sqrt(Test)) / (2 * a);
        double r2 = (-b - sqrt(Test)) / (2 * a);   
        cout << "Two different roots " << "x1=" << r1 <<" , "<<"x2=" << r2 << endl;             
    }
    //重根
    else if(Test==0){
        double r = -b / (2 * a);
        cout << "Two same roots" <<" x=" << r << endl;    
    }
    //無實數解
    else{
        cout << "No real root" << endl;
    }
    
    return 0;
}


/*
if (條件式一) { 
    陳述一; 
} else if(條件式二) { 
    陳述句二; 
} else if(條件式三） { 
    陳述句三; 
} else { 
    陳述句四;
}
*/