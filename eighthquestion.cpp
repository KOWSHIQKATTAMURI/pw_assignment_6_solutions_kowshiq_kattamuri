#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> multiply(vector<vector<int>>& A, vector<vector<int>>& B){
    int M = A.size(), K = A[0].size(), N = B[0].size();
    vector<vector<int>> ans(M, vector<int>(N));
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < K; k++){
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return ans;
}

int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<vector<int>> nums1(n, vector<int>(m)), nums2(a, vector<int>(b));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> nums1[i][j];
        }
    }
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin >> nums2[i][j];
        }
    }
    vector<vector<int>> ans = multiply(nums1, nums2);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
