#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        // Using else if bcoz we want this condition to check once then loop again
        else if (arr[mid] == 1)
        {
            mid++;
            ;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main()
{
    int arr[20] = {0, 1, 1, 2, 0, 2, 1, 0, 1, 2, 0, 1, 1, 2, 2, 0, 1, 0, 2, 1};
    sort(arr, 20);

    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}