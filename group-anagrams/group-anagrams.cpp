// Group Anagrams | Medium
// https://leetcode.com/problems/group-anagrams/
// Solved: 2026-06-15
//
class Solution {
public:


bool checkAnagram(string a, string b){
    if(a.length() != b.length()) return false;

    sort(a.begin(),a.end());
    sort(b.begin(), b.end());

    return a==b;
}
    vector<vector<string>> groupAnagrams(vector<string>& v) {
           int n =  v.size();
    vector<bool>vis (n, false);

    vector<vector<string>>result;

    for(int i=0;i<n;i++){
        
        if(vis[i]) continue;

        vector<string>tmp;

        tmp.push_back(v[i]);

        vis[i] =  true;

        for(int j=i+1;j<n;j++){

            if(!vis[j] && checkAnagram(v[i], v[j])){
                tmp.push_back(v[j]);
                vis[j] =  true;
            }
        }

        result.push_back(tmp);
    }

    return result; 
    }
};