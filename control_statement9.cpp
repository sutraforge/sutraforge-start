#include<iostream>
using namespace std;

int main(){

    // sequence control
    cout<<"sequence control "<<endl;
    
    cout<<"sequence control "<<endl;

    // selection control
    int DOB,age;

    cout<<"Enter your DOB :";
    cin>>DOB;
    age = 2026-DOB;
    // if-else-if else control       
    // if(age<18){
    //     cout<<"You are not allowed in party "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are eligible for my party "<<endl;
    // }
    // else{
    //     cout<<"you are most welcome "<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"You can start your NDA preparation!"<<endl;
        break;
    
    default:
        break;
    }
    // if (condition)
    // {
    //     /* code */
    // }
    // else
    // {
    //     /* code */
    // }

    // loop control
    
    
    cout<<"Done with switch key";
// Loop statement

  return 0;
}