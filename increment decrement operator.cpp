#include<iostream>
using namespace std;
int main()
{
    int a,p,q,r,s;
    cin>>a;
    cout<<endl;
    cout<<"Value of the variable is "<<a<<endl<<endl;

    p=a++;
    cout<<"After post increment: "<<endl;
    cout<<"Value of P= "<<p<<endl;
    cout<<"The Value of the variable is "<<a<<endl<<endl;

    cout<<"After pre increment: "<<endl;
    q=++a;
    cout<<"The value of Q= "<<q<<endl;
    cout<<"The Value of the variable is "<<a<<endl<<endl;

    cout<<"Starting Decrement"<<endl<<endl;

    cout<<"Now the Value of the variable is "<<a<<endl<<endl;

    r=a--;
    cout<<"After post Decrement: "<<endl;
    cout<<"The Value of the R= "<<r<<endl;
    cout<<"The Value of the variable is "<<a<<endl<<endl;

    s=--a;
    cout<<"After pre decrement: "<<endl;
    cout<<"The Value of the S= "<<s<<endl;
    cout<<"The Value of the variable is "<<a<<endl<<endl;
}

