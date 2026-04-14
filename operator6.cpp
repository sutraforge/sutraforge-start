
#include<iostream>

using namespace std;

int main(){
    int a=6,b=4;
    cout<< "Operators in c ++ \n";
    //arithmatic operator
    cout<<"a+b :"<<(a+b)<<endl;
    cout<<"a-b :"<<(a-b)<<endl;
    cout<<"a*b :"<<(a*b)<<endl;
    cout<<"a/b :"<<(a/b)<<endl;
    cout<<"a%b :"<<(a%b)<<endl;
    cout<<"++a :"<<(++a)<<endl;
    cout<<"--a :"<<(--a)<<endl;
    
    //relational operator
    cout<<"a==b :"<<(a==b)<<endl;
    cout<<"a>b :"<<(a>b)<<endl;
    cout<<"a>=b :"<<(a>=b)<<endl;
    cout<<"a<b :"<<(a<b)<<endl;
    cout<<"a<=b :"<<(a<=b)<<endl;
    cout<<"a!=b :"<<(a!=b)<<endl;

    //logical operator
    cout<<"a>b&&a<b"<<(a>b&&a<b)<<endl; //logical AND
    cout<<"a>b||a<b:"<<(a>b||a<b)<<endl; //logical OR
    cout<<"!(a>b) :"<<(!(a>b) )<<endl;   //logical NOT

    //bitwise operator
    cout<<"a&b :"<<(a&b)<<endl; //binary AND
    cout<<"a|b :"<<(a|b)<<endl; //binary OR
    cout<<"~a   :"<<(~a)<<endl;   //One's compliment
    cout<<"a^b  :"<<(a^b)<<endl; //binary XOR
    cout<<"a<<1 :"<<(a<<1)<<endl; //left shift
    cout<<"a>>1 :"<<(a>>1)<<endl;   //right shift

    //assignment  operator
    cout<<"a= :"<<a<<endl;
    cout<<"a+=b :"<<(a+=b)<<endl;
    cout<<"a-=b :"<<(a-=b)<<endl;
    cout<<"a*=b :"<<(a*=b)<<endl;
    cout<<"a/=b :"<<(a/=b)<<endl;

    //ternary or conditional operator
    //cout<<"the greatest numbetr :"<<(a<b) ? b : a <<endl;

    //miscellaneous operator

    // cout<< sizeof(a);
    // cout<< (a=(b+1 , b+2 , b+3)); //comma operator
    cout<< &a<<endl;//addressof operator
    cout<< &b;//addressof operator


    // dereference operator 
    // * -----> show value saved at address 

    
    return 0;
}