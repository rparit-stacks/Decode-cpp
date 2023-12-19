#include<iostream>
#include<vector>

using namespace std;

void display(int *arr, int size)
{

     for(int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
}


int main()
{

    int arr[] = {9,2,3,4,1,6,5,8,7};

    int size = sizeof(arr)/sizeof(arr[0]);

    display(arr, size);

    for(int i=0 ; i<size-1; i++){
        bool flag = false;
    for(int j=0; j<size-1-i; j++){
                    if(arr[j]>arr[j+1]) {
                            swap(arr[j],arr[j+1]);
                            flag = true;
                        }
                }
                if(flag == false)
                    break;
        }

    cout<<endl;
        display(arr, size);


}