#include <iostream>

using namespace std;

class Rohit
{
public:
    int a;
    int b;

public:
    int operator()(Rohit &obj2)
    {
        return a + b;
    }
};

int main()
{
    Rohit obj1, obj2;
    obj1.b = 20;
    obj2.a = 40;
}