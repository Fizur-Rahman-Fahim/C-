#include<iostream>
using namespace std;
int main()
{
    int a,b,c,result;
    cin>>a>>b>>c;
    result= max(a,max(b,c));
    cout<<"The maximum value is "<<result;
}

