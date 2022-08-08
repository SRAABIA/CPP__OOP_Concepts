#include<iostream>
using namespace std;

class Puma
{
    int a = 10;
    int age;
    Puma(int a) :age(a) {}    

    friend Puma createPuma(int a);
    Puma()
    {
        cout << a;
    }

    public:
    static Puma create(int a) { return Puma(a); }
};
Puma createPuma(int a) { return Puma(a); }

int main()
{
    Puma pum();
    return 0;
}