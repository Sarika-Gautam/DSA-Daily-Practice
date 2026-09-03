#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 7, 11, 15};
    int n = 4;
    int target = 9;

    int left = 0;
    int right = n - 1;

    while(left < right) {

        int sum = arr[left] + arr[right];

        if(sum == target) {
            cout << left + 1 << " " << right + 1;
            return 0;
        }

        else if(sum < target) {
            left++;
        }

        else {
            right--;
        }
    }

    return 0;
}