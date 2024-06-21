#include <iostream>
using namespace std;

void traversal(int arr[])
{
    // multi input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter elemrnt (" << i << "," << j << ")" << " : ";
            cin >> arr[i];
        }
    }
}
int main()
{
    // first way
    int arr[9][10];
    arr[0][5] = 4;
    // second way
    int arr2[2][2] = {1, 2, 3, 4};
    // third way
    int arr3[2][2] = {{1, 2}, {3, 4}};

    cout << arr[0][5] << endl;
    cout << arr2[1][1] << endl;
    cout << arr3[1][1] << endl;
}
