#include <iostream>
using namespace std;

int main()
{
    int n=2,m=4;
    int arr[m][n];

    for(int i = 0 ; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(j == 0)
            {
                cout << "Enter the roll number of student " << i + 1;
                cin >> arr[i][j];
                
            }
            else{
                cout << "Enter the marks of student "<< i+1;
                cin >> arr[i][j];
            }
           

        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
