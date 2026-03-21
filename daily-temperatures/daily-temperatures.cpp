// Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/
// Solved: 2026-03-21
//
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int>ans(n,0);
        // for(int i=0;i<n;i++){
        //     for(int j = i+1;j<n;j++){
        //         if(temperatures[j] > temperatures[i]){
        //             ans[i] = j-i;
        //             break;
        //         }
        //     }
        // }
        stack<int>st;
        // 73
        for(int i=0;i<n;i++)
        {
            while(!st.empty() &&  temp[i] > temp[st.top()]){
                int prevIndex = st.top(); 
                st.pop();
                ans[prevIndex] = i - prevIndex;
            }

            st.push(i); // 2 3 4 5 
        }

        return ans;
    }
};