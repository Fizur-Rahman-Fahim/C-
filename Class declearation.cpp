#include<iostream>
using namespace std;

class Hello
{
public:
    void sayhi()
    {
        cout<<"hello "<<endl;
    }
};

int main()
{
    Hello h;

    h.sayhi();
}

