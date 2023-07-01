#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target){
    int m = matrix.size();
    int n = matrix[0].size();
    if(target < matrix[0][0] or target > matrix[m - 1][n - 1]){
        return false;
    }
    int i = 0, j = 0;
    while(i <= m - 1){
        if(target >= matrix[i][0] and target <= matrix[i][n - 1]){
            break;
        }
        i++;
    }
    if(i == m){
        return false;
    }
    int end = n - 1;
    while(j <= end){
        int mid = j + (end - j)/2;
        if(matrix[i][mid] == target){
            return true;
        }else if(matrix[i][mid] > target){
            end = mid - 1;
        }else{
            j = mid + 1;
        }
    }
    return false;
}

int main(){
    int n, m, target;
    cin >> n >> m >> target;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    cout << searchMatrix(matrix, target);
}
