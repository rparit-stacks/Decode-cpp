#include<iostream>
using namespace std;



int main()
{
    int countnum = 0, counttm =0;

    int n = 10, m = 5;
    for(int i  = 0; i<n; i++)
    {
        countnum++;
        for(int j =0; j<m; j++)
        {
           
            counttm++;
        }
            
    }

    cout<<countnum<<endl<<counttm;
}