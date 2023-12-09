#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    string str[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter a String of idx : " << i;
        cin >> str[i];
    }

    string s[n];
    s[0] = str[0];

    for(int i = 1; i < n; i++)
    {
        s[i] = s[i-1] + str[i];
    }

    
        cout << s[n-1]<< endl;
    

    return 0;
}
