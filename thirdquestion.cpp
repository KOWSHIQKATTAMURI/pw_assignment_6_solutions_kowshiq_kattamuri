#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr){
        int i = 0; 
        while(i + 1 < arr.size() and arr[i] < arr[i + 1]){
            i++;
        }
        if(i == 0 or i == arr.size() - 1){
            return false;
        }
        while(i + 1 < arr.size() and arr[i] > arr[i + 1]){
            i++;
        }
        return i == arr.size() - 1;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << validMountainArray(nums);
}
