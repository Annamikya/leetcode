class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int XOR = 0;
        for (int i = 0;i<arr.size();i++){
            XOR = XOR^arr[i];
        }
        return XOR;
        
    }
};