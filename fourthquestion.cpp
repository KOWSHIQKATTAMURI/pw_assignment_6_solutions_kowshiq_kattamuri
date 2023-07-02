#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums){
        int longest_sum = 0, sum = 0;
        unordered_map<int, int> kow;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i] == 1 ? 1 : -1;
            if(sum == 0){
                if(longest_sum < i + 1){
                    longest_sum = i + 1;
                }
            }else if(kow.find(sum) != kow.end()){
                if(longest_sum < i - kow[sum]){
                    longest_sum = i - kow[sum];
                }
            }else{
                kow[sum] = i;
            }
        }
        return longest_sum;
    }

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << findMaxLength(nums) << endl;
}
