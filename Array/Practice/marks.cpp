#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of Student: ";
    cin>>n;
    cout<<endl;
    int marks[n];

    for(int i = 0; i<=n-1; i++)
    {
        cout<<"Enter Marks of student "<<i+1<<" : ";
        cin>>marks[i];
    }
    cout<<endl;
    for(int j = 0; j <= n-1; j++)
    {
        if(marks[j]>100)
            cout<<"Please Enter a valid marks of student "<<j+1<<endl;

        if(marks[j]<35)
            cout<<"Student "<<j+1<<" has obtained less than 35 marks."<<endl;
    }
}
     