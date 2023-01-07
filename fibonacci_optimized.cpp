#include <iostream>

using namespace std;

//optimization with memorization --> O(n)

// Global array to save previously computed fibnocci numbers
int f[15] = {-1};

int fib(int n){

    if(n==0){
        f[n] = n;
        return 0;
    }
    else if(n==1){
        f[n] = n;
        return 1;
    }
    else{
        if(f[n-2] == -1){
            f[n-2] = fib(n-2);
        }
        if(f[n-1] == -1){
            f[n-1] = fib(n-1);
        }
        return fib(n-2) + fib(n-1);
    }
}

int main(){
    cout<<fib(7);    // 13
    return 0;
}