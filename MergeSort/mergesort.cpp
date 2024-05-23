#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &num1, vector<int> &num2, vector<int> &nums)
{
    int i = 0, j = 0, k = 0;
    while (i < num1.size() && j < num2.size())
    {
        if (num1[i] < num2[j])
            nums[k++] = num1[i++];

        if (num1[i] > num2[j])
            nums[k++] = num2[j++];
    }

    while (j < num2.size())
        nums[k++] = num2[j++];

    while (i < num1.size())
        nums[k++] = num1[i++];
}

void mergeSort(vector<int> &num)
{
    if (num.size() == 1)
        return;
    int size_of_a = num.size() / 2;
    int size_of_b = num.size() - num.size() / 2;
    vector<int> a(size_of_a);
    vector<int> b(size_of_b);

    // filling for vector A and B
    for (int i = 0, j = 0; i < num.size(); i++)
    {
        if (i < size_of_a)
            a[i] = num[i];
        else
            b[j++] = num[i];
    }

    // sort the array via recursion
    mergeSort(a);
    mergeSort(b);

    // merge the array using merge function
    merge(a, b, num);
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9, 0, 8, 6, 4, 2};

    mergeSort(nums);

    for (int ele : nums)
        cout << ele << " ";
}