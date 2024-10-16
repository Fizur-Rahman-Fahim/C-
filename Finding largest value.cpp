#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b &&a>c)
        cout<<"The largest value = "<<a;
    else if(b>a&&b>>c)
        cout<<"The largest value = "<<b;
    else
        cout<<"The largest value = "<<c;
}
