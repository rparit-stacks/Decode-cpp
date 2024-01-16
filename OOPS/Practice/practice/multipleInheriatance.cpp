#include <iostream>

using namespace std;

class human
{

public:
    string name;
    int finger;
};

class gender
{
public:
    string gender;
};

/* The class "use" inherits from the classes "human" and "gender" and has a method "getinfor" that
prints out the name, finger, and gender. */

class use : public human, public gender
{
public:
    void getinfo()
    {
        cout << name << endl
             << finger << endl
             << gender;
    }
};

int main()
{
    use A1;
    A1.name = "Rohit";
    A1.finger = 5;
    A1.gender = "male";

    A1.getinfo();
}