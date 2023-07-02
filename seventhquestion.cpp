#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> generateMatrix(int n){
        vector<vector<int>> kow(n, vector<int>(n, 1));
        if(n == 1){
            return kow;
        }
        int top = 0, bottom = n - 1, left = 0, right = n - 1, j = 1;
        while(top <= bottom and left <= right and j <= n*n){
            if(top <= bottom){
                for(int i = left; i <= right; i++){
                    kow[top][i] = j++;
                }
                top++;
            }
            if(left <= right){
                for(int i = top; i <= bottom; i++){
                    kow[i][right] = j++;
                }
                right--;
            }
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    kow[bottom][i] = j++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    kow[i][left] = j++;
                }
                left++;
            }
        }
        return kow;
    }

int main(){
    int n;
    cin >> n;
    vector<vector<int>> ans = generateMatrix(n);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
