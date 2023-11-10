#include<iostream>
#include<vector>

using namespace std;

int main() {
    
    int num = 5;

    vector<int>trq(num);
    int i = 0;
    while(i<num)
    {
        cout<<"ENter elements : ";
        cin>>trq[i];
        i++;
    }

    i = num-1;
    while(i>=0)
    {
        cout<<trq[i];
        i--;
    }
}

