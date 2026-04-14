#include<iostream>
using namespace std;

// void swap(int a,int b){
//     int temp =a;
//     a=b;
//     b=temp;
// }
// Call by Reference using pointers 
// void swapPointer(int *a,int *b){
//     int temp =*a;
//     *a=*b;
//     *b=temp;
// }
// Call by Reference using pointers 
int& swapReferenceVar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
    return a;
}

int main(){
    int x=4,y=5;
    cout<<x<<endl;
    cout<<y<<endl;
    // swapPointer(&x,&y);//Pointer reference
    swapReferenceVar(x,y)=766;//Reference variable
    cout<<x<<endl;
    cout<<y<<endl;
    
    return 0;
}