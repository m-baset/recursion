#include <iostream>

using namespace std;

// e^x = 1 + (x/1) * (1 + (x/2) * (1 + (x/3) * (1 + (x/4)....n-terms)))

float e(int x, int n){
    // static variable to save sums
    static float s = 1;

    if(n == 0){
        return s;
    }
    s = 1 + (float(x)/n) * s;
    return e(x, n-1);
}

int main(){
    cout<<e(4,10);    
    return 0;
}