#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 2, 2, 3};
    int n = 5;

    int slow = 0;

    for(int fast = 1; fast < n; fast++) {

        if(arr[fast] != arr[slow]) {

            slow++;
            arr[slow] = arr[fast];
        }
    }

    int k = slow + 1;

    cout << "Unique elements: ";

    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nk = " << k;

    return 0;
}