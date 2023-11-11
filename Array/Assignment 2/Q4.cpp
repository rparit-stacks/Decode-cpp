//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<iostream>
#include<vector>
using namespace std;

int positive(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}

void solve() 
{
}
int main()
{
    int sum = 0, sum2 = 0; 
    vector<int> vec;
     for(int i=0;i<=5;i++) 
    {
        int m;
        cout<<"Enter element : ";
        cin>>m;
        vec.push_back(m);
    }

    for(int i = 0; i < vec.size(); i++)
    {
        if(i%2 == 0)
        {
            sum = sum + vec[i];
        }

        else sum2 = sum2 + vec[i];
    }

    cout<<"The difference between the sum of elements at even indices to the sum of elements at odd indices is : "<< positive(sum,sum2);
}