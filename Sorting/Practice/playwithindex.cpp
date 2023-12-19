#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void display(vector<int> &vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    vector<int> vec = {44, 22, 65, 4, 7};

    vector<int> vec1 = vec;

    sort(vec1.begin(), vec1.end());

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec1.size(); j++)
        {
            if (vec[i] == vec1[j])
            {
                vec[i] = j;
            }
        }
    }

    display(vec);
}