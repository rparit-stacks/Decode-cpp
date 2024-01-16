#include <iostream>

using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "Hello world !";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "Hello Rohit !";
    }
};

class derived : public base1, public base2
{
public:
    void greet()
    {
        base1 ::greet();
    }
};

int main()
{
    derived d;

    d.greet();
}