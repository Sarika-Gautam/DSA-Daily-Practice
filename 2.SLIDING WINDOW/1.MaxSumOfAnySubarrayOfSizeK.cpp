#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = 6;

    int maxSum = 0;

    for(int i = 0; i <= n - k; i++) {

        int sum = 0;

        for(int j = i; j < i + k; j++) {
            sum += arr[j];
        }

        maxSum = max(maxSum, sum);
    }

    cout << "Maximum Sum = " << maxSum;

    return 0;
}