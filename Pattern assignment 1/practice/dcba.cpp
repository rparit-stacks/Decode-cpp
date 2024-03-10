#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int j = i + 97;
        while (j >= 97)
        {
            cout << (char)j << " ";
            j--;
        }
        cout << endl;
    }
}