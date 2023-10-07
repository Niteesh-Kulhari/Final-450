#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int l, int n)
{

    if (l >= n - 1)
    {
        return 0;
    }

    if (arr[l] == 0)
    {
        return INT_MAX;
    }

    int jumps = INT_MAX;

    for (int i = l + 1; i <= l + arr[l] && i < n; i++)
    {
        jumps = min(jumps, 1 + minJumps(arr, i, n));
    }

    return jumps;
}

int main()
{
    int arr[11] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int j = minJumps(arr, 0, 11);
    cout << j << endl;
    return 0;
}
