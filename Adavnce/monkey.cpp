#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
void gate_open_close(vector<bool> &gates, int num)
{

    for (int i = num; i < gates.size(); i = i + num)
    {

        if (gates[i] == 0)
            gates[i] = 1;
        else
            gates[i] = 0;
    }
}
int main()
{
    vector<bool> gates(101, 0);
    // vector<bool> monkey(100,1);

    for (int i = 1; i <= 100; i++)
    {
        gate_open_close(gates, i);
    }
    // int count = 0;
    for (int ele : gates)
        cout << ele << " ";

    // if (ele == 1)
    //     count++;

    return 0;
}