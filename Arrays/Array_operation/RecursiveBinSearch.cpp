#include <iostream>
using namespace std;

int RBinSearch(int arr[], int n, int l, int r, int target)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return RBinSearch(arr, n, l, mid - 1, target);
        }
        else
        {
            return RBinSearch(arr, n, mid + 1, r, target);
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {4, 8, 10, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << RBinSearch(arr, n, 0, n - 1, 18);
}