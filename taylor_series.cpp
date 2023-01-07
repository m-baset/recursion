#include <iostream>

using namespace std;

// e^x = 1 + x/1 + x^2/2! + x^3/3! .... n-terms

float taylor(int x, int n){
    static float p = 1;
    static int f = 1;

    float r = 0;

    if(n == 0){
        return 1;
    }

    else{
        r = taylor(x, n-1);
        p = p * x;
        f = f * n;
        return r + (p/f);
    }
}

int main(){
    cout<<taylor(4,10);
    return 0;
}