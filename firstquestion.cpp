#include<bits/stdc++.h>
using namespace std;

vector<int> diStringMatch(string s){
    int n = s.length();
    vector<int> ans;
    int l = 0, r = n;
    for(int i = 0; i < n; i++){
        if(i == n - 1){
            if(s[i] == 'D'){
                ans.push_back(r);
                ans.push_back(l);
                continue;
            }else{
                ans.push_back(l);
                ans.push_back(r);
                continue;
            }
        }else if(s[i] == 'I'){
            ans.push_back(l);
            l++;
        }else{
            ans.push_back(r);
            r--;
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<int> ans = diStringMatch(s);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
