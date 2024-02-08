#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    string s = "rohit";
    string t = "tihor";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "true";
    else
        cout << "false";
}