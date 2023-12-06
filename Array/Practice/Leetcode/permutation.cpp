#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void display(vector<int> &vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]<< " ";
    }
}

void sort(vector<int> &vec, int m)
{
    for(int i = m ; i < vec.size(); i++)
    {
        for(int j = i+1; j < vec.size(); j++)
        {
            if (vec[j] < vec[i])
            {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

int main()
{
    int index = -1;

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    for(int i = vec.size()-2; i >= 0; i--)
    {
        if(vec[i]<vec[i+1])
        {
            index = i;
            break;
        }
    }

    if(index == -1) reverse(vec.begin(), vec.end());;
    
    reverse(vec.begin()+index+1, vec.end());
    sort(vec,0);
    
    display(vec);
}
