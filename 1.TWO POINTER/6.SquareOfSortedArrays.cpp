#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int arr[] = {-4, -1, 0, 3, 10};
    int n = 5;

    int result[5];

    int left = 0;
    int right = n - 1;

    for(int i = n - 1; i >= 0; i--){

        if(abs(arr[left]) > abs(arr[right])){

            result[i] = arr[left] * arr[left];
            left++;
        }
        else{

            result[i] = arr[right] * arr[right];
            right--;
        }
    }

    for(int i = 0; i < n; i++){
        cout << result[i] << " ";
    }

    return 0;
}