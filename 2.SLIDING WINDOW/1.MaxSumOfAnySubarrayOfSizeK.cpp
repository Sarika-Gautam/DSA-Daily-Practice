#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    int sum = 0;

    // First window
    for(int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    int maxSum = sum;

    // Slide the window
    for(int i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    cout << maxSum;

    return 0;
}