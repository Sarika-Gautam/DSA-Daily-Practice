#include<iostream>
#include<unordered_map>
using namespace std;
 
int main(){
    bool containsDuplicate(int arr[],int n);
    int arr[] ={1,2,1,3,3};
    int n=5;
    unordered_map< int , int >mp;
    for(int i=0; i<n; i++){
        if(mp[arr[i]] ==1 ){
            cout << "Duplicate found";
            return 0;
        }
        mp[arr[i]]++;
    } 
    cout << "No duplicates";
    return 0;
}