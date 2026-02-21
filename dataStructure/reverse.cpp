#include <iostream>
using namespace std;

void reverseArr(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    int arr[] = {1, 2, 3, 4};
    reverseArr(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i];
    }
}