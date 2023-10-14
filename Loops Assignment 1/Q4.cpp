//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include<iostream>
using namespace std;
int main()
{
    int n = 4,m;
    cout << "Enter a number";
    cin >> m;
    for(int i = 1; i<=m ; i++)
    {
        cout<< n<<endl;
        n=n+3;
    }
    return 0;
}