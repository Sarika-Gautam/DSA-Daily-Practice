#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 1, 1, 1, 3};
    int n = 6;

    unordered_map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for(auto it : mp) {

        if(it.second > n / 2) {
            cout << it.first;
            break;
        }
    }

    return 0;
}