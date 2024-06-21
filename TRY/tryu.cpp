#include<vector>
#include<iostream>
using namespace std;

// void display(vector<int> &vec)
// {
//     for(int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i]<< " ";
//     }
// }
// int main()
// {
//     int m,n;
//     cout<<"Enter M and N : "<<endl;
//     cin>>m>>n;

//     vector<int> nums1;
//     for(int i = 0; i<m; i++)
//     {
//         int a;
//         cout<<"Enter element : ";
//         cin>>a;
//         nums1.push_back(a);
//     }

//     vector<int> nums2;
//     for(int i = 0; i<n; i++)
//     {
//         int a;
//         cout<<"Enter element : ";
//         cin>>a;
//         nums2.push_back(a);
//     }
//     int p=0,q=0,r=0;
    
//     vector<int> result(m+n);
//     for(i)
//     {
//         if(nums1[p]<=nums2[q])
//         {
//             result[r] = nums1[p];
//             p++;
//             r++;
//         }
//         else
//         {
//             result[r] = nums2[q];
//             q++;
//             r++;
//         }
//     }
//     display(result);
    
// }

void primeOrNot(int x)
{
    bool flag = true;
    for(int i = 2; i<x-1; i++)
    {
        if(x%i == 0)
        {
            cout<<x<<" is a odd number but not prime number";
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<x<<" Is odd number and prime number also";
}

int main()
{
    int x  = 5;
    
    if(x%2==0) cout<<"The given number is even";
    else primeOrNot(x);
}