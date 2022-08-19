#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Parent Constructor Called - A" << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Child Constructor called - B" << endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "Child Constructor called - C" << endl;
    }
};
class D : public B
{
public:
    D()
    {
        cout << "Child Constructor called - D" << endl;
    }
};




int main()
{
    // B objB;
    // A objA;
    // C objC;
    D objD;
    return 0;
}