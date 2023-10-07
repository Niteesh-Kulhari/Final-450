#include <bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n)
{
    int MAX_SO_FAR = INT_MIN;
    int MAX_ENDING = 0;

    for (int i = 0; i < n; i++)
    {
        MAX_ENDING = MAX_ENDING + arr[i];
        if (MAX_SO_FAR < MAX_ENDING)
        {
            MAX_SO_FAR = MAX_ENDING;
        }

        if (MAX_ENDING < 0)
        {
            MAX_ENDING = 0;
        }
    }

    return MAX_SO_FAR;
}

int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int sum = maxSum(arr, 8);
    cout << "Thye sum is: " << sum << endl;
    return 0;
}
