#include <iostream>
using namespace std;

class B
{
    int b;

public:
    B(int a) : b(a)
    {
        cout << "Param constructor of B" <<b<< endl;
    }
};
class A
{
    int a;

public:
    A(int a) : a(a)
    {
        cout << "Param constructor of A" <<a<< endl;
    }
};
class C : public A, public B
{
    int c;

public:
    C(int a, int b, int c) : c(c), A(a), B(b)
    {
        cout << "Param constructor of C" <<c<< endl;
    }
};
int main()
{
    C obj(11, 22, 33);
    return 0;
}