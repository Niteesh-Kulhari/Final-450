#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{

    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    int tempMin = arr[0];
    int tempMax = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0)
            continue;

        tempMin = min(arr[0] + k, arr[i] - k);
        tempMax = max(arr[i - 1] + k, arr[n - 1] - k);

        ans = min(ans, tempMax - tempMin);
    }

    return ans;
}

int main()
{

    int k = 3, n = 4;
    int arr[n] = {1, 5, 15, 10};

    // Function Call
    int ans = getMinDiff(arr, n, k);
    cout << ans;
    return 0;
}
