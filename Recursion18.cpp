#include<iostream>
using namespace std;
int fact(int n){
    if (n <= 1){
        return 1;
    }
    return n * fact(n-1);
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
int main(){
    int x;
    cin>>x;
    // cout<<fact(x);
    cout<<fib(x);
    return 0;
}