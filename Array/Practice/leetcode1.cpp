#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a1 = {0};
    vector<int> a2 = {1};

    vector<int> a3;
    // Merge the two vectors into one.
    a3.insert(a3.end(), a1.begin(), a1.end());
    a3.insert(a3.end(), a2.begin(), a2.end());

    sort(a3.begin(), a3.end());

  

    cout << "[";

    for (int i = 0; i < a3.size(); i++)
    {
        if (a3[i] > 0)
        {
            cout << a3[i];
            if(i < a3.size()-1) cout<<",";
            
        }
    }

    cout << "]";
}
