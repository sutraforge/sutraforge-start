#include<iostream>
using namespace std;
// function prototype
// int sum(int a,int b); //acceptable
int sum(int ,int ); //acceptable


void g();

int main(){
    int x,y;  //actual parameter
    cin>>x>>y;
    cout<<sum(x,y);
    g();
    return 0;
}

int sum(int a, int b){ //formal parameter
    int c=a+b; 
    return c;
}

void g(){
    cout<<"hello";
}