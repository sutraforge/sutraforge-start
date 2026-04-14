#include<iostream>

using namespace std;

int main(){
    // loop cotrol 
    int i,j,table;
    cout<<"which number table :";
    cin>>j;
    cout<<"Table of "<<j<<endl;

    // for loop
    // for (i=1;i<=10;i++){
    //     table=i*j;
    //     cout<<table<<endl;
    // }
    // while loop
    i=1; 
    while(i<=10){
        table=i*j;
        cout<<table<<endl;
        i++;
    }
    // do-while loops
    // i=1;
    // do
    // {
    //     table=i*j;
    //     cout<<table<<endl;
    //     i++;
    // } while (i<=10);
    

    return 0;
}