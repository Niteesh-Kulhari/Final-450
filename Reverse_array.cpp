#include <iostream>
using namespace std;

void reverse(int *arr, int start, int end)
{
    if (start > end)
    {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    reverse(arr, start, end);
}

void printArr(int arr[], int n)
{
    cout << "The Array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    reverse(arr, 0, 5);
    printArr(arr, n);
}