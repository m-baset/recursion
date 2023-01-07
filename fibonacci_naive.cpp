#include <iostream>

// Not optimized --> O(2^n)

using namespace std;

int fibonacci_naive(int n){
    if(n==0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacci_naive(n-1) + fibonacci_naive(n-2);
    }
}

int main(){
    cout<<fibonacci_naive(7);   //8
    return 0;
}