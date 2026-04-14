#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    /* data */
    int rice;
    char material;
    float nagad;
};

int main(){

    enum Meal{breakfast,lunch,dinner};

    Meal m1=breakfast;
    cout<<m1;

    // union village utkarsh;
    // utkarsh.material='s';
    // utkarsh.rice=6;
    // utkarsh.nagad=300;

    // cout<<utkarsh.material<<endl;
    


    // strut 
    // struct employee utkarsh;
    // utkarsh.eId=63;
    // utkarsh.favChar='g';
    // utkarsh.salary=1000000;
    // cout << utkarsh.eId << endl;
    // cout << utkarsh.favChar << endl;
    // cout << utkarsh.salary << endl;
    
    return 0;
}