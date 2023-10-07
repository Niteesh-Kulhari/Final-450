#include <iostream>
using namespace std;

void moveNegative(int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        if (arr[low] > 0 && arr[high] < 0)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
        else if (arr[low] < 0 && arr[high] < 0)
        {
            low++;
        }
        else if (arr[low] > 0 && arr[high] > 0)
        {
            high--;
        }
        else
        {
            low++;
            high--;
        }
    }
}

// void rearrange(int arr[], int n)
// {
//     int i = 0;
//     int j = 0;
// }

int main()
{
    int arr[9] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    moveNegative(arr, 9);

    cout << "The Array is: ";

    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
}