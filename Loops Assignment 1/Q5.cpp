//Display this GP - 3,12,48,.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main()
{
    int n = 3,m;
    cout << "Enter a number";
    cin >> m;
    for(int i = 1; i<=m ; i++)
    {
        cout<< n<<endl;
        n=n*4;
    }
    return 0;
}