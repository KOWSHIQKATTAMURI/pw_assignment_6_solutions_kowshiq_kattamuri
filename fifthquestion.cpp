#include<bits/stdc++.h>
using namespace std;

int minProductSum(vector<int>& A, vector<int>& B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < A.size(); ++i){
        ans += A[i]*B[i];
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums1(n), nums2(n);
    for(int i = 0; i < n; i++){
        cin >> nums1[i] >> nums2[i];
    }
    cout << minProductSum(nums1, nums2) << endl;
}
