#include<iostream>
using namespace std;

int main(){
    // poionter 
    int a=3;
    int* b=&a;
    // & -----> Addressof Operator 
    // * -----> Dereference Operator 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The value of b is "<<b<<endl;

    cout<<"The value at address saved at b is "<<*b<<endl;

    // pointer to pointer 

    int** c=&b;

    cout<<"The address of b is "<<&b<<endl;
    cout<<"The value of c is"<<c<<endl;

    cout<<"The value at(value at address saved at b) is "<<**c<<endl;


    return 0;
}