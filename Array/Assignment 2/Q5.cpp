//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.


#include<iostream>
#include<vector>
/* The line `using namespace std;` is a directive that allows us to use the names of the standard
library (std) without having to prefix them with `std::`. This makes it easier to write and read
code, as we don't have to repeatedly type `std::` before using standard library functions or
objects. */

using namespace std;

void display(vector<int>&vec)
{
    for(int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
}
int main()
{
    vector<int> vec;
     /* The line `for(int i=0;i<=5;i++)` is a for loop that iterates from 0 to 5 (inclusive). It is
     used to get input from the user for 6 elements of the array. */
     for(int i=0;i<=5;i++) 
    {
        int m;
        cout<<"Enter element : ";
        cin>>m;
        vec.push_back(m);
    }
    display(vec);
    /* The line `for(int i = 0; i < vec.size(); i++)` is a for loop that iterates over each element of
    the vector `vec`. It starts with `i` initialized to 0, and continues as long as `i` is less than
    the size of the vector `vec`. After each iteration, `i` is incremented by 1. */
    for(int i = 0; i < vec.size(); i++)
    {
        if(i%2 == 0)
        {
            vec[i] = vec[i] + 10;
        }
        else{
            vec[i] = vec[i] * 2;
        }
    }
    cout<<"\n";
    display(vec);
}
 