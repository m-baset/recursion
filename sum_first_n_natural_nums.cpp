#include <iostream>

using namespace std;

int get_sum_recursion(int n){
    if(n > 0){
        return n + get_sum_recursion(n - 1);
    }
    return 0;
}

int get_sum_loop(int n){
    int sum = 0;
    for(int i = 1; i<=n ; i++){
        sum += i;
    }
    return sum;
}

int get_sum_formula(int n){
    return (n * (n+1)) / 2;
}

int main(){
    int n = 7;
    cout<<get_sum_recursion(n)<<endl;
    cout<<get_sum_loop(n)<<endl;
    cout<<get_sum_formula(n)<<endl;
    return 0;
}