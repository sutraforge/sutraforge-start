#include<iostream>
using namespace std;
inline product(int a,int b){
    return a*b;
}
float bank(int x,float y=1.04){
    return x*1.04;
}
int main(){
    int x,y;
    // cin>>x>>y;
    // cout<<product(x,y);
    int money;
    cin>>money;
    cout<<"bank return "<<bank(money);
    
    return 0;
}