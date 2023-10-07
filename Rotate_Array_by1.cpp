#include <iostream>
using namespace std;

void rotateArray(int *arr, int n, int k)
{
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = arr[i];
    }

    arr = ans;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {6, 2, 3, 4, 5, 1};
    int n = 6;
    // How many place to rotate by are given in k
    int k = 1;
    rotateArray(arr, n, k);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
