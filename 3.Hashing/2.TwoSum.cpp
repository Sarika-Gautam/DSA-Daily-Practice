#include<iostream>
#include<unordered_map>
using namespace std ;

int main(){
    int findTwoSum(int arr[], int n ,int target );
    int arr[]={1,2,3,4,5};
    int n=5;
    int target = 4;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        int required = target - arr[i];
        if(mp.find(required) != mp.end()) {
            cout << " required indexes are [" << mp[required] << " " << i <<"]";
            return 0;
        }

        mp[arr[i]] = i;
    }
    return 0;
}
