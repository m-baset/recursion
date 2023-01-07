#include <iostream>

using namespace std;

/* Mathmatical Expression for recursion */
// m^n = m * m^(n-1)

int power(int m, int n){
    if(n == 0){
        return 1;
    }
    else{
        return m * power(m , n-1);
    }
}

int power_optimized(int m, int n){
    if(n == 0){
        return 1;
    }
    else if(n % 2 == 0){
        return power_optimized(m * m , n / 2);
    }
    else if (n % 2 == 1){
        return m * power_optimized(m*m, (n-1)/2);
    }
}

int main(){
    cout<<power(-2, 5)<<endl;
    cout<<power_optimized(-2, 5)<<endl;
    return 0;
}