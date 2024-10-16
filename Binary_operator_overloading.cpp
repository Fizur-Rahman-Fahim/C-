#include<iostream>
using namespace std;
class complex
{
    float x,y;
    public:
    complex(){}                         //constructor 1
    complex(float real, float imag)    //constructor 2
    {
        x=real;
        y=imag;
    }
    complex operator+(complex);
    void display(void);
};
complex complex :: operator+(complex c)
{
    complex temp;                       //temporary
    temp.x = x + c.x;                   //these are
    temp.y = y + c.y;                   //float additions
    return (temp);
}
void complex :: display(void)
{
    cout<<x<<" +j"<<y<<"\n";
}
int main()
{
    complex C1, C2, C3;                 //invokes constructors 1
    C1 = complex(2.5, 3.5);             //invokes constructors 2
    C1 = complex(1.6, 2.7);
    C3 = C1 + C2;

    cout<<"C1 = "; C1.display();
    cout<<"C2 = "; C2.display();
    cout<<"C3 = "; C3.display();
    return 0;
}
