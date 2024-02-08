#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
#include <climits>
using namespace std;

int main()
{
    string str = "Hello    World  ";
    int count = 0;
    int n = sizeof(str);

    for (int i = n ; i >= 0;)
    {
       if(count>0 && str[i] == ' ')
       {
        break;
       }
       else

    }
    cout << count;
}