class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini = p[0];
        int maxProfit=0;
        int n=p.size();
        for(int i=0;i<n;i++){
            int cost=p[i]-mini;
            maxProfit=max(maxProfit,cost);
            mini = min (mini,p[i]);
        }
        return maxProfit;
    }
    
};