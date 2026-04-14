#include<iostream>
using namespace std;

int main(){
    int marks[4]={23,45,63,43};
    int mathMarks[4];
    mathMarks[0]=98;
    mathMarks[1]=78;
    mathMarks[2]=35;
    mathMarks[3]=68;
    cout<<"These are math marks "<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<"These are marks "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // array and pointer 
    int* p=marks;
    cout<<*(++p)<<endl;
    cout<<*(p);
    // cout<<"the value of marks[0] "<<*p<<endl;
    // cout<<"the value of marks[1] "<<*(p+1)<<endl;
    // cout<<"the value of marks[2] "<<*(p+2)<<endl;
    // cout<<"the value of marks[3] "<<*(p+3)<<endl;
    
    return 0;
}