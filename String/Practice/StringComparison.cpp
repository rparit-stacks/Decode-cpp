#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str,str2;

    cout << "Enter a String : ";
    getline(cin,str);
    cout << "Enter 2nd String : ";
    getline(cin,str2);

    int len = str.size();
    int len2 = str2.size();
    int count = 0;

    if(len != len2) {
        cout << "Strings are not equal" << endl;
    }
    else {
        for(int i=0; i<len; i++) {
            if(str[i] != str2[i]) 
            {
                cout << "Strings are not equal" << endl;
                break;
            }
            else
            {
                count++;
            }
        }

        if(count == len) 
            { 
            cout << "Strings are equal" << endl;
            }

    return 0;
}
}
