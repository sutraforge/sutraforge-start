#include<iostream>
using namespace std;

int main(){
    // reference variable
    float x=455;
    float &y=x;
    y=45;
    cout<<x<<endl;        
    cout<<y<<endl;
    return 0;
}