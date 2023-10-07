#include <iostream>
using namespace std;

int findUnion(int arr1[], int arr2[], int s1, int s2)
{

    int i = 0;
    int j = 0;
    int count = 0;

    while (i < s1 && j < s2)
    {
        if (arr1[i] == arr2[j])
        {
            i++;
            j++;
            count++;
        }
    }

    while (i < s1)
    {
        i++;
        count++;
    }

    while (j < s2)
    {
        j++;
        count++;
    }

    return count;
}

int main()
{
    int arr1[9] = {1, 2, 3, 4, 5, 88, 9, 10, 11};
    int arr2[5] = {1, 2, 3, 99, 1000};

    cout << "The no. of elements in union are: " << findUnion(arr1, arr2, 9, 5);
    return 0;
}
