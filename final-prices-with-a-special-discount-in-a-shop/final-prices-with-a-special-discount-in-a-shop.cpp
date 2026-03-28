// Final Prices With a Special Discount in a Shop | Easy
// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
// Solved: 2026-03-28
//
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
       // prices the list
       //8 4 6 2 3
       int n = prices.size();
    stack<int>st;
    vector<int>res = prices;
    for(int i=0;i<n;i++){
        while(!st.empty() && prices[st.top()] >= prices[i]){
            res[st.top()] -= prices[i]; 
            st.pop();
            }
        st.push(i);
    }


    return res;
    }
};